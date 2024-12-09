"use strict";

/// <reference types="tree-sitter-cli/dsl" />
// @ts-check

module.exports = grammar({
  name: "jsdn",

  extras: $ => [$.comment, /[\s\p{Zs}\uFEFF\u2028\u2029\u2060\u200b]/u],

  supertypes: $ => [$._value],

  rules: {
    document: $ => repeat($._value),

    _value: $ =>
      choice(
        $.object,
        $.array,
        $.string,
        $.number,
        $.true,
        $.false,
        $.null,
        $.undefined,
      ),

    object: $ => seq("{", commaSep(optional($.pair)), "}"),

    pair: $ =>
      seq(field("key", $._property_name), ":", field("value", $._value)),

    _property_name: $ => choice($.identifier, $.string, $.number),

    identifier: _ => {
      const alpha =
        /[^\x00-\x1F\s\p{Zs}0-9:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u2028\u2029]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/u;

      const alphanumeric =
        /[^\x00-\x1F\s\p{Zs}:;`"'@#.,|^&<=>+\-*/\\%?!~()\[\]{}\uFEFF\u2060\u200B\u2028\u2029]|\\u[0-9a-fA-F]{4}|\\u\{[0-9a-fA-F]+\}/u;
      return token(seq(alpha, repeat(alphanumeric)));
    },

    array: $ => seq("[", commaSep(optional($._value)), "]"),

    string: $ =>
      choice(
        seq(
          '"',
          repeat(
            choice(
              alias($.unescaped_double_string_fragment, $.string_fragment),
              $.escape_sequence,
            ),
          ),
          '"',
        ),
        seq(
          "'",
          repeat(
            choice(
              alias($.unescaped_single_string_fragment, $.string_fragment),
              $.escape_sequence,
            ),
          ),
          "'",
        ),
      ),

    unescaped_double_string_fragment: _ =>
      token.immediate(prec(1, /[^"\\\r\n]+/)),

    unescaped_single_string_fragment: _ =>
      token.immediate(prec(1, /[^'\\\r\n]+/)),

    escape_sequence: _ =>
      token.immediate(
        seq(
          "\\",
          choice(
            /[^xu0-7]/,
            /[0-7]{1,3}/,
            /x[a-fA-F0-9]{2}/,
            /u[a-fA-F0-9]{4}/,
            /u\{[a-fA-F0-9]+\}/,
            /[\r?][\n\u2028\u2029]/,
          ),
        ),
      ),

    number($) {
      const hexLiteral = seq(choice("0x", "0X"), /[\da-fA-F](_?[\da-fA-F])*/);

      const decimalDigits = /\d(_?\d)*/;
      const signedInteger = seq(optional(choice("-", "+")), decimalDigits);
      const exponentPart = seq(choice("e", "E"), signedInteger);

      const binaryLiteral = seq(choice("0b", "0B"), /[0-1](_?[0-1])*/);

      const octalLiteral = seq(choice("0o", "0O"), /[0-7](_?[0-7])*/);

      const bigintLiteral = seq(
        choice(hexLiteral, binaryLiteral, octalLiteral, decimalDigits),
        "n",
      );

      const decimalIntegerLiteral = choice(
        "0",
        seq(
          optional("0"),
          /[1-9]/,
          optional(seq(optional("_"), decimalDigits)),
        ),
      );

      const decimalLiteral = choice(
        seq(
          decimalIntegerLiteral,
          ".",
          optional(decimalDigits),
          optional(exponentPart),
        ),
        seq(".", decimalDigits, optional(exponentPart)),
        seq(decimalIntegerLiteral, exponentPart),
        decimalDigits,
      );

      return token(
        seq(
          optional("-"),
          choice(
            hexLiteral,
            decimalLiteral,
            binaryLiteral,
            octalLiteral,
            bigintLiteral,
          ),
        ),
      );
    },

    true: _ => "true",

    false: _ => "false",

    null: _ => "null",

    undefined: _ => "undefined",

    comment: _ =>
      token(
        choice(
          seq("//", /[^\r\n\u2028\u2029]*/),
          seq("/*", /[^*]*\*+([^/*][^*]*\*+)*/, "/"),
        ),
      ),
  },
});

/**
 * Creates a rule to optionally match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {ChoiceRule}
 */
function commaSep(rule) {
  return optional(commaSep1(rule));
}

/**
 * Creates a rule to match one or more of the rules separated by a comma
 *
 * @param {Rule} rule
 *
 * @returns {SeqRule}
 */
function commaSep1(rule) {
  return seq(rule, repeat(seq(",", rule)));
}
