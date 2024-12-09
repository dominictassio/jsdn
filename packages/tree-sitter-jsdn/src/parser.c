#include "tree_sitter/parser.h"

#if defined(__GNUC__) || defined(__clang__)
#pragma GCC diagnostic ignored "-Wmissing-field-initializers"
#endif

#define LANGUAGE_VERSION 14
#define STATE_COUNT 37
#define LARGE_STATE_COUNT 6
#define SYMBOL_COUNT 31
#define ALIAS_COUNT 0
#define TOKEN_COUNT 19
#define EXTERNAL_TOKEN_COUNT 0
#define FIELD_COUNT 2
#define MAX_ALIAS_SEQUENCE_LENGTH 4
#define PRODUCTION_ID_COUNT 2

enum ts_symbol_identifiers {
  anon_sym_LBRACE = 1,
  anon_sym_COMMA = 2,
  anon_sym_RBRACE = 3,
  anon_sym_COLON = 4,
  sym_identifier = 5,
  anon_sym_LBRACK = 6,
  anon_sym_RBRACK = 7,
  anon_sym_DQUOTE = 8,
  anon_sym_SQUOTE = 9,
  sym_unescaped_double_string_fragment = 10,
  sym_unescaped_single_string_fragment = 11,
  sym_escape_sequence = 12,
  sym_number = 13,
  sym_true = 14,
  sym_false = 15,
  sym_null = 16,
  sym_undefined = 17,
  sym_comment = 18,
  sym_document = 19,
  sym__value = 20,
  sym_object = 21,
  sym_pair = 22,
  sym__property_name = 23,
  sym_array = 24,
  sym_string = 25,
  aux_sym_document_repeat1 = 26,
  aux_sym_object_repeat1 = 27,
  aux_sym_array_repeat1 = 28,
  aux_sym_string_repeat1 = 29,
  aux_sym_string_repeat2 = 30,
};

static const char * const ts_symbol_names[] = {
  [ts_builtin_sym_end] = "end",
  [anon_sym_LBRACE] = "{",
  [anon_sym_COMMA] = ",",
  [anon_sym_RBRACE] = "}",
  [anon_sym_COLON] = ":",
  [sym_identifier] = "identifier",
  [anon_sym_LBRACK] = "[",
  [anon_sym_RBRACK] = "]",
  [anon_sym_DQUOTE] = "\"",
  [anon_sym_SQUOTE] = "'",
  [sym_unescaped_double_string_fragment] = "string_fragment",
  [sym_unescaped_single_string_fragment] = "string_fragment",
  [sym_escape_sequence] = "escape_sequence",
  [sym_number] = "number",
  [sym_true] = "true",
  [sym_false] = "false",
  [sym_null] = "null",
  [sym_undefined] = "undefined",
  [sym_comment] = "comment",
  [sym_document] = "document",
  [sym__value] = "_value",
  [sym_object] = "object",
  [sym_pair] = "pair",
  [sym__property_name] = "_property_name",
  [sym_array] = "array",
  [sym_string] = "string",
  [aux_sym_document_repeat1] = "document_repeat1",
  [aux_sym_object_repeat1] = "object_repeat1",
  [aux_sym_array_repeat1] = "array_repeat1",
  [aux_sym_string_repeat1] = "string_repeat1",
  [aux_sym_string_repeat2] = "string_repeat2",
};

static const TSSymbol ts_symbol_map[] = {
  [ts_builtin_sym_end] = ts_builtin_sym_end,
  [anon_sym_LBRACE] = anon_sym_LBRACE,
  [anon_sym_COMMA] = anon_sym_COMMA,
  [anon_sym_RBRACE] = anon_sym_RBRACE,
  [anon_sym_COLON] = anon_sym_COLON,
  [sym_identifier] = sym_identifier,
  [anon_sym_LBRACK] = anon_sym_LBRACK,
  [anon_sym_RBRACK] = anon_sym_RBRACK,
  [anon_sym_DQUOTE] = anon_sym_DQUOTE,
  [anon_sym_SQUOTE] = anon_sym_SQUOTE,
  [sym_unescaped_double_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_unescaped_single_string_fragment] = sym_unescaped_double_string_fragment,
  [sym_escape_sequence] = sym_escape_sequence,
  [sym_number] = sym_number,
  [sym_true] = sym_true,
  [sym_false] = sym_false,
  [sym_null] = sym_null,
  [sym_undefined] = sym_undefined,
  [sym_comment] = sym_comment,
  [sym_document] = sym_document,
  [sym__value] = sym__value,
  [sym_object] = sym_object,
  [sym_pair] = sym_pair,
  [sym__property_name] = sym__property_name,
  [sym_array] = sym_array,
  [sym_string] = sym_string,
  [aux_sym_document_repeat1] = aux_sym_document_repeat1,
  [aux_sym_object_repeat1] = aux_sym_object_repeat1,
  [aux_sym_array_repeat1] = aux_sym_array_repeat1,
  [aux_sym_string_repeat1] = aux_sym_string_repeat1,
  [aux_sym_string_repeat2] = aux_sym_string_repeat2,
};

static const TSSymbolMetadata ts_symbol_metadata[] = {
  [ts_builtin_sym_end] = {
    .visible = false,
    .named = true,
  },
  [anon_sym_LBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COMMA] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_COLON] = {
    .visible = true,
    .named = false,
  },
  [sym_identifier] = {
    .visible = true,
    .named = true,
  },
  [anon_sym_LBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_RBRACK] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_DQUOTE] = {
    .visible = true,
    .named = false,
  },
  [anon_sym_SQUOTE] = {
    .visible = true,
    .named = false,
  },
  [sym_unescaped_double_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_unescaped_single_string_fragment] = {
    .visible = true,
    .named = true,
  },
  [sym_escape_sequence] = {
    .visible = true,
    .named = true,
  },
  [sym_number] = {
    .visible = true,
    .named = true,
  },
  [sym_true] = {
    .visible = true,
    .named = true,
  },
  [sym_false] = {
    .visible = true,
    .named = true,
  },
  [sym_null] = {
    .visible = true,
    .named = true,
  },
  [sym_undefined] = {
    .visible = true,
    .named = true,
  },
  [sym_comment] = {
    .visible = true,
    .named = true,
  },
  [sym_document] = {
    .visible = true,
    .named = true,
  },
  [sym__value] = {
    .visible = false,
    .named = true,
    .supertype = true,
  },
  [sym_object] = {
    .visible = true,
    .named = true,
  },
  [sym_pair] = {
    .visible = true,
    .named = true,
  },
  [sym__property_name] = {
    .visible = false,
    .named = true,
  },
  [sym_array] = {
    .visible = true,
    .named = true,
  },
  [sym_string] = {
    .visible = true,
    .named = true,
  },
  [aux_sym_document_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_object_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_array_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat1] = {
    .visible = false,
    .named = false,
  },
  [aux_sym_string_repeat2] = {
    .visible = false,
    .named = false,
  },
};

enum ts_field_identifiers {
  field_key = 1,
  field_value = 2,
};

static const char * const ts_field_names[] = {
  [0] = NULL,
  [field_key] = "key",
  [field_value] = "value",
};

static const TSFieldMapSlice ts_field_map_slices[PRODUCTION_ID_COUNT] = {
  [1] = {.index = 0, .length = 2},
};

static const TSFieldMapEntry ts_field_map_entries[] = {
  [0] =
    {field_key, 0},
    {field_value, 2},
};

static const TSSymbol ts_alias_sequences[PRODUCTION_ID_COUNT][MAX_ALIAS_SEQUENCE_LENGTH] = {
  [0] = {0},
};

static const uint16_t ts_non_terminal_alias_map[] = {
  0,
};

static const TSStateId ts_primary_state_ids[STATE_COUNT] = {
  [0] = 0,
  [1] = 1,
  [2] = 2,
  [3] = 3,
  [4] = 4,
  [5] = 5,
  [6] = 6,
  [7] = 7,
  [8] = 8,
  [9] = 9,
  [10] = 10,
  [11] = 11,
  [12] = 12,
  [13] = 13,
  [14] = 14,
  [15] = 15,
  [16] = 16,
  [17] = 17,
  [18] = 18,
  [19] = 19,
  [20] = 20,
  [21] = 21,
  [22] = 22,
  [23] = 23,
  [24] = 24,
  [25] = 25,
  [26] = 26,
  [27] = 27,
  [28] = 28,
  [29] = 29,
  [30] = 30,
  [31] = 31,
  [32] = 32,
  [33] = 33,
  [34] = 34,
  [35] = 35,
  [36] = 36,
};

static TSCharacterRange extras_character_set_1[] = {
  {'\t', '\r'}, {' ', ' '}, {0xa0, 0xa0}, {0x1680, 0x1680}, {0x2000, 0x200b}, {0x2028, 0x2029}, {0x202f, 0x202f}, {0x205f, 0x2060},
  {0x3000, 0x3000}, {0xfeff, 0xfeff},
};

static TSCharacterRange sym_identifier_character_set_2[] = {
  {'$', '$'}, {'0', '9'}, {'A', 'Z'}, {'\\', '\\'}, {'_', '_'}, {'a', 'z'}, {0x7f, 0x9f}, {0xa1, 0x167f},
  {0x1681, 0x1fff}, {0x200c, 0x2027}, {0x202a, 0x202e}, {0x2030, 0x205e}, {0x2061, 0x2fff}, {0x3001, 0xfefe}, {0xff00, 0x10ffff},
};

static bool ts_lex(TSLexer *lexer, TSStateId state) {
  START_LEXER();
  eof = lexer->eof(lexer);
  switch (state) {
    case 0:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '"', 59,
        '\'', 60,
        ',', 53,
        '-', 9,
        '.', 38,
        '/', 6,
        '0', 78,
        ':', 55,
        '[', 57,
        '\\', 26,
        ']', 58,
        'f', 10,
        'n', 28,
        't', 24,
        'u', 22,
        '{', 52,
        '}', 54,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(50);
      END_STATE();
    case 1:
      ADVANCE_MAP(
        '"', 59,
        '\'', 60,
        ',', 53,
        '-', 9,
        '.', 38,
        '/', 6,
        '0', 78,
        '\\', 29,
        '}', 54,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(1);
      if (lookahead > '#' &&
          (lookahead < '%' || '@' < lookahead) &&
          (lookahead < '[' || '^' < lookahead) &&
          lookahead != '`' &&
          (lookahead < '{' || '~' < lookahead)) ADVANCE(56);
      END_STATE();
    case 2:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '/') ADVANCE(6);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(2);
      END_STATE();
    case 3:
      if (lookahead == '"') ADVANCE(59);
      if (lookahead == '/') ADVANCE(61);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(2);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(64);
      if (lookahead != 0) ADVANCE(66);
      END_STATE();
    case 4:
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '/') ADVANCE(6);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(4);
      END_STATE();
    case 5:
      if (lookahead == '\'') ADVANCE(60);
      if (lookahead == '/') ADVANCE(67);
      if (lookahead == '\\') ADVANCE(26);
      if (lookahead == '\n' ||
          lookahead == '\r') SKIP(4);
      if (set_contains(extras_character_set_1, 10, lookahead)) ADVANCE(70);
      if (lookahead != 0) ADVANCE(72);
      END_STATE();
    case 6:
      if (lookahead == '*') ADVANCE(8);
      if (lookahead == '/') ADVANCE(92);
      END_STATE();
    case 7:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead == '/') ADVANCE(91);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 8:
      if (lookahead == '*') ADVANCE(7);
      if (lookahead != 0) ADVANCE(8);
      END_STATE();
    case 9:
      if (lookahead == '.') ADVANCE(38);
      if (lookahead == '0') ADVANCE(78);
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 10:
      if (lookahead == 'a') ADVANCE(19);
      END_STATE();
    case 11:
      if (lookahead == 'd') ADVANCE(90);
      END_STATE();
    case 12:
      if (lookahead == 'd') ADVANCE(14);
      END_STATE();
    case 13:
      if (lookahead == 'e') ADVANCE(87);
      END_STATE();
    case 14:
      if (lookahead == 'e') ADVANCE(17);
      END_STATE();
    case 15:
      if (lookahead == 'e') ADVANCE(88);
      END_STATE();
    case 16:
      if (lookahead == 'e') ADVANCE(11);
      END_STATE();
    case 17:
      if (lookahead == 'f') ADVANCE(18);
      END_STATE();
    case 18:
      if (lookahead == 'i') ADVANCE(23);
      END_STATE();
    case 19:
      if (lookahead == 'l') ADVANCE(25);
      END_STATE();
    case 20:
      if (lookahead == 'l') ADVANCE(89);
      END_STATE();
    case 21:
      if (lookahead == 'l') ADVANCE(20);
      END_STATE();
    case 22:
      if (lookahead == 'n') ADVANCE(12);
      END_STATE();
    case 23:
      if (lookahead == 'n') ADVANCE(16);
      END_STATE();
    case 24:
      if (lookahead == 'r') ADVANCE(27);
      END_STATE();
    case 25:
      if (lookahead == 's') ADVANCE(15);
      END_STATE();
    case 26:
      if (lookahead == 'u') ADVANCE(30);
      if (lookahead == 'x') ADVANCE(47);
      if (lookahead == '\r' ||
          lookahead == '?') ADVANCE(74);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(76);
      if (lookahead != 0) ADVANCE(73);
      END_STATE();
    case 27:
      if (lookahead == 'u') ADVANCE(13);
      END_STATE();
    case 28:
      if (lookahead == 'u') ADVANCE(21);
      END_STATE();
    case 29:
      if (lookahead == 'u') ADVANCE(31);
      END_STATE();
    case 30:
      if (lookahead == '{') ADVANCE(43);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(45);
      END_STATE();
    case 31:
      if (lookahead == '{') ADVANCE(46);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(49);
      END_STATE();
    case 32:
      if (lookahead == '}') ADVANCE(73);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 33:
      if (lookahead == '}') ADVANCE(56);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 34:
      if (lookahead == '+' ||
          lookahead == '-') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 35:
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 36:
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 37:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 38:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 39:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 40:
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 41:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(73);
      END_STATE();
    case 42:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 43:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(32);
      END_STATE();
    case 44:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(56);
      END_STATE();
    case 45:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(47);
      END_STATE();
    case 46:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(33);
      END_STATE();
    case 47:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(41);
      END_STATE();
    case 48:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(44);
      END_STATE();
    case 49:
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(48);
      END_STATE();
    case 50:
      if (eof) ADVANCE(51);
      ADVANCE_MAP(
        '"', 59,
        '\'', 60,
        ',', 53,
        '-', 9,
        '.', 38,
        '/', 6,
        '0', 78,
        ':', 55,
        '[', 57,
        ']', 58,
        'f', 10,
        'n', 28,
        't', 24,
        'u', 22,
        '{', 52,
        '}', 54,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      if (set_contains(extras_character_set_1, 10, lookahead)) SKIP(50);
      END_STATE();
    case 51:
      ACCEPT_TOKEN(ts_builtin_sym_end);
      END_STATE();
    case 52:
      ACCEPT_TOKEN(anon_sym_LBRACE);
      END_STATE();
    case 53:
      ACCEPT_TOKEN(anon_sym_COMMA);
      END_STATE();
    case 54:
      ACCEPT_TOKEN(anon_sym_RBRACE);
      END_STATE();
    case 55:
      ACCEPT_TOKEN(anon_sym_COLON);
      END_STATE();
    case 56:
      ACCEPT_TOKEN(sym_identifier);
      if (lookahead == '\\') ADVANCE(29);
      if (set_contains(sym_identifier_character_set_2, 15, lookahead)) ADVANCE(56);
      END_STATE();
    case 57:
      ACCEPT_TOKEN(anon_sym_LBRACK);
      END_STATE();
    case 58:
      ACCEPT_TOKEN(anon_sym_RBRACK);
      END_STATE();
    case 59:
      ACCEPT_TOKEN(anon_sym_DQUOTE);
      END_STATE();
    case 60:
      ACCEPT_TOKEN(anon_sym_SQUOTE);
      END_STATE();
    case 61:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(63);
      if (lookahead == '/') ADVANCE(65);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 62:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead == '/') ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 63:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '*') ADVANCE(62);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(63);
      END_STATE();
    case 64:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == '/') ADVANCE(61);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(64);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 65:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(66);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(65);
      END_STATE();
    case 66:
      ACCEPT_TOKEN(sym_unescaped_double_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '"' &&
          lookahead != '\\') ADVANCE(66);
      END_STATE();
    case 67:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(69);
      if (lookahead == '/') ADVANCE(71);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 68:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead == '/') ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 69:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '*') ADVANCE(68);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(69);
      END_STATE();
    case 70:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == '/') ADVANCE(67);
      if ((set_contains(extras_character_set_1, 10, lookahead)) &&
          lookahead != '\n' &&
          lookahead != '\r') ADVANCE(70);
      if (lookahead != 0 &&
          (lookahead < '\t' || '\r' < lookahead) &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 71:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(72);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(71);
      END_STATE();
    case 72:
      ACCEPT_TOKEN(sym_unescaped_single_string_fragment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != '\'' &&
          lookahead != '\\') ADVANCE(72);
      END_STATE();
    case 73:
      ACCEPT_TOKEN(sym_escape_sequence);
      END_STATE();
    case 74:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (lookahead == '\n' ||
          lookahead == 0x2028 ||
          lookahead == 0x2029) ADVANCE(73);
      END_STATE();
    case 75:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(73);
      END_STATE();
    case 76:
      ACCEPT_TOKEN(sym_escape_sequence);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(75);
      END_STATE();
    case 77:
      ACCEPT_TOKEN(sym_number);
      END_STATE();
    case 78:
      ACCEPT_TOKEN(sym_number);
      ADVANCE_MAP(
        '.', 86,
        '0', 84,
        '_', 39,
        'n', 77,
        'B', 35,
        'b', 35,
        'E', 34,
        'e', 34,
        'O', 36,
        'o', 36,
        'X', 42,
        'x', 42,
      );
      if (('1' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 79:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '.') ADVANCE(86);
      if (lookahead == '_') ADVANCE(37);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(79);
      END_STATE();
    case 80:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(38);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 81:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(35);
      if (lookahead == 'n') ADVANCE(77);
      if (lookahead == '0' ||
          lookahead == '1') ADVANCE(81);
      END_STATE();
    case 82:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(36);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '7')) ADVANCE(82);
      END_STATE();
    case 83:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(42);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9') ||
          ('A' <= lookahead && lookahead <= 'F') ||
          ('a' <= lookahead && lookahead <= 'f')) ADVANCE(83);
      END_STATE();
    case 84:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(39);
      if (lookahead == 'n') ADVANCE(77);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(84);
      END_STATE();
    case 85:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == '_') ADVANCE(40);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(85);
      END_STATE();
    case 86:
      ACCEPT_TOKEN(sym_number);
      if (lookahead == 'E' ||
          lookahead == 'e') ADVANCE(34);
      if (('0' <= lookahead && lookahead <= '9')) ADVANCE(80);
      END_STATE();
    case 87:
      ACCEPT_TOKEN(sym_true);
      END_STATE();
    case 88:
      ACCEPT_TOKEN(sym_false);
      END_STATE();
    case 89:
      ACCEPT_TOKEN(sym_null);
      END_STATE();
    case 90:
      ACCEPT_TOKEN(sym_undefined);
      END_STATE();
    case 91:
      ACCEPT_TOKEN(sym_comment);
      END_STATE();
    case 92:
      ACCEPT_TOKEN(sym_comment);
      if (lookahead != 0 &&
          lookahead != '\n' &&
          lookahead != '\r' &&
          lookahead != 0x2028 &&
          lookahead != 0x2029) ADVANCE(92);
      END_STATE();
    default:
      return false;
  }
}

static const TSLexMode ts_lex_modes[STATE_COUNT] = {
  [0] = {.lex_state = 0},
  [1] = {.lex_state = 0},
  [2] = {.lex_state = 0},
  [3] = {.lex_state = 0},
  [4] = {.lex_state = 0},
  [5] = {.lex_state = 0},
  [6] = {.lex_state = 0},
  [7] = {.lex_state = 0},
  [8] = {.lex_state = 0},
  [9] = {.lex_state = 0},
  [10] = {.lex_state = 0},
  [11] = {.lex_state = 0},
  [12] = {.lex_state = 0},
  [13] = {.lex_state = 0},
  [14] = {.lex_state = 0},
  [15] = {.lex_state = 0},
  [16] = {.lex_state = 1},
  [17] = {.lex_state = 1},
  [18] = {.lex_state = 5},
  [19] = {.lex_state = 5},
  [20] = {.lex_state = 3},
  [21] = {.lex_state = 3},
  [22] = {.lex_state = 5},
  [23] = {.lex_state = 3},
  [24] = {.lex_state = 0},
  [25] = {.lex_state = 0},
  [26] = {.lex_state = 0},
  [27] = {.lex_state = 0},
  [28] = {.lex_state = 0},
  [29] = {.lex_state = 0},
  [30] = {.lex_state = 0},
  [31] = {.lex_state = 0},
  [32] = {.lex_state = 0},
  [33] = {.lex_state = 0},
  [34] = {.lex_state = 0},
  [35] = {.lex_state = 0},
  [36] = {.lex_state = 0},
};

static const uint16_t ts_parse_table[LARGE_STATE_COUNT][SYMBOL_COUNT] = {
  [0] = {
    [ts_builtin_sym_end] = ACTIONS(1),
    [anon_sym_LBRACE] = ACTIONS(1),
    [anon_sym_COMMA] = ACTIONS(1),
    [anon_sym_RBRACE] = ACTIONS(1),
    [anon_sym_COLON] = ACTIONS(1),
    [anon_sym_LBRACK] = ACTIONS(1),
    [anon_sym_RBRACK] = ACTIONS(1),
    [anon_sym_DQUOTE] = ACTIONS(1),
    [anon_sym_SQUOTE] = ACTIONS(1),
    [sym_escape_sequence] = ACTIONS(1),
    [sym_number] = ACTIONS(1),
    [sym_true] = ACTIONS(1),
    [sym_false] = ACTIONS(1),
    [sym_null] = ACTIONS(1),
    [sym_undefined] = ACTIONS(1),
    [sym_comment] = ACTIONS(3),
  },
  [1] = {
    [sym_document] = STATE(36),
    [sym__value] = STATE(3),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_document_repeat1] = STATE(3),
    [ts_builtin_sym_end] = ACTIONS(5),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_undefined] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [2] = {
    [sym__value] = STATE(24),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_array_repeat1] = STATE(25),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(17),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(19),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_undefined] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [3] = {
    [sym__value] = STATE(5),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(21),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_undefined] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [4] = {
    [sym__value] = STATE(33),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [anon_sym_LBRACE] = ACTIONS(7),
    [anon_sym_COMMA] = ACTIONS(23),
    [anon_sym_LBRACK] = ACTIONS(9),
    [anon_sym_RBRACK] = ACTIONS(23),
    [anon_sym_DQUOTE] = ACTIONS(11),
    [anon_sym_SQUOTE] = ACTIONS(13),
    [sym_number] = ACTIONS(15),
    [sym_true] = ACTIONS(15),
    [sym_false] = ACTIONS(15),
    [sym_null] = ACTIONS(15),
    [sym_undefined] = ACTIONS(15),
    [sym_comment] = ACTIONS(3),
  },
  [5] = {
    [sym__value] = STATE(5),
    [sym_object] = STATE(9),
    [sym_array] = STATE(9),
    [sym_string] = STATE(9),
    [aux_sym_document_repeat1] = STATE(5),
    [ts_builtin_sym_end] = ACTIONS(25),
    [anon_sym_LBRACE] = ACTIONS(27),
    [anon_sym_LBRACK] = ACTIONS(30),
    [anon_sym_DQUOTE] = ACTIONS(33),
    [anon_sym_SQUOTE] = ACTIONS(36),
    [sym_number] = ACTIONS(39),
    [sym_true] = ACTIONS(39),
    [sym_false] = ACTIONS(39),
    [sym_null] = ACTIONS(39),
    [sym_undefined] = ACTIONS(39),
    [sym_comment] = ACTIONS(3),
  },
};

static const uint16_t ts_small_parse_table[] = {
  [0] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(42), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [20] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(44), 14,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_COLON,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [40] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(46), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [59] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(48), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [78] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(50), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [97] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(52), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [116] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(54), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [135] = 8,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(7), 1,
      anon_sym_LBRACE,
    ACTIONS(9), 1,
      anon_sym_LBRACK,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(34), 1,
      sym__value,
    STATE(9), 3,
      sym_object,
      sym_array,
      sym_string,
    ACTIONS(15), 5,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [166] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(56), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [185] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(58), 13,
      ts_builtin_sym_end,
      anon_sym_LBRACE,
      anon_sym_COMMA,
      anon_sym_RBRACE,
      anon_sym_LBRACK,
      anon_sym_RBRACK,
      anon_sym_DQUOTE,
      anon_sym_SQUOTE,
      sym_number,
      sym_true,
      sym_false,
      sym_null,
      sym_undefined,
  [204] = 9,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(62), 1,
      anon_sym_RBRACE,
    STATE(26), 1,
      aux_sym_object_repeat1,
    STATE(27), 1,
      sym_pair,
    ACTIONS(64), 2,
      sym_identifier,
      sym_number,
    STATE(35), 2,
      sym__property_name,
      sym_string,
  [234] = 7,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(11), 1,
      anon_sym_DQUOTE,
    ACTIONS(13), 1,
      anon_sym_SQUOTE,
    STATE(32), 1,
      sym_pair,
    ACTIONS(64), 2,
      sym_identifier,
      sym_number,
    ACTIONS(66), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
    STATE(35), 2,
      sym__property_name,
      sym_string,
  [259] = 4,
    ACTIONS(68), 1,
      anon_sym_SQUOTE,
    ACTIONS(72), 1,
      sym_comment,
    STATE(19), 1,
      aux_sym_string_repeat2,
    ACTIONS(70), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [273] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      aux_sym_string_repeat2,
    ACTIONS(76), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [287] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(74), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_repeat1,
    ACTIONS(78), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [301] = 4,
    ACTIONS(68), 1,
      anon_sym_DQUOTE,
    ACTIONS(72), 1,
      sym_comment,
    STATE(20), 1,
      aux_sym_string_repeat1,
    ACTIONS(80), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [315] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(82), 1,
      anon_sym_SQUOTE,
    STATE(22), 1,
      aux_sym_string_repeat2,
    ACTIONS(84), 2,
      sym_unescaped_single_string_fragment,
      sym_escape_sequence,
  [329] = 4,
    ACTIONS(72), 1,
      sym_comment,
    ACTIONS(87), 1,
      anon_sym_DQUOTE,
    STATE(23), 1,
      aux_sym_string_repeat1,
    ACTIONS(89), 2,
      sym_unescaped_double_string_fragment,
      sym_escape_sequence,
  [343] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(30), 1,
      aux_sym_array_repeat1,
  [356] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(92), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_array_repeat1,
  [369] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_repeat1,
  [382] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(94), 1,
      anon_sym_RBRACE,
    STATE(31), 1,
      aux_sym_object_repeat1,
  [395] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(96), 1,
      anon_sym_COMMA,
    ACTIONS(99), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_array_repeat1,
  [408] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(101), 1,
      anon_sym_COMMA,
    ACTIONS(104), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_repeat1,
  [421] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(17), 1,
      anon_sym_COMMA,
    ACTIONS(106), 1,
      anon_sym_RBRACK,
    STATE(28), 1,
      aux_sym_array_repeat1,
  [434] = 4,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(60), 1,
      anon_sym_COMMA,
    ACTIONS(108), 1,
      anon_sym_RBRACE,
    STATE(29), 1,
      aux_sym_object_repeat1,
  [447] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(104), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [455] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(99), 2,
      anon_sym_COMMA,
      anon_sym_RBRACK,
  [463] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(110), 2,
      anon_sym_COMMA,
      anon_sym_RBRACE,
  [471] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(112), 1,
      anon_sym_COLON,
  [478] = 2,
    ACTIONS(3), 1,
      sym_comment,
    ACTIONS(114), 1,
      ts_builtin_sym_end,
};

static const uint32_t ts_small_parse_table_map[] = {
  [SMALL_STATE(6)] = 0,
  [SMALL_STATE(7)] = 20,
  [SMALL_STATE(8)] = 40,
  [SMALL_STATE(9)] = 59,
  [SMALL_STATE(10)] = 78,
  [SMALL_STATE(11)] = 97,
  [SMALL_STATE(12)] = 116,
  [SMALL_STATE(13)] = 135,
  [SMALL_STATE(14)] = 166,
  [SMALL_STATE(15)] = 185,
  [SMALL_STATE(16)] = 204,
  [SMALL_STATE(17)] = 234,
  [SMALL_STATE(18)] = 259,
  [SMALL_STATE(19)] = 273,
  [SMALL_STATE(20)] = 287,
  [SMALL_STATE(21)] = 301,
  [SMALL_STATE(22)] = 315,
  [SMALL_STATE(23)] = 329,
  [SMALL_STATE(24)] = 343,
  [SMALL_STATE(25)] = 356,
  [SMALL_STATE(26)] = 369,
  [SMALL_STATE(27)] = 382,
  [SMALL_STATE(28)] = 395,
  [SMALL_STATE(29)] = 408,
  [SMALL_STATE(30)] = 421,
  [SMALL_STATE(31)] = 434,
  [SMALL_STATE(32)] = 447,
  [SMALL_STATE(33)] = 455,
  [SMALL_STATE(34)] = 463,
  [SMALL_STATE(35)] = 471,
  [SMALL_STATE(36)] = 478,
};

static const TSParseActionEntry ts_parse_actions[] = {
  [0] = {.entry = {.count = 0, .reusable = false}},
  [1] = {.entry = {.count = 1, .reusable = false}}, RECOVER(),
  [3] = {.entry = {.count = 1, .reusable = true}}, SHIFT_EXTRA(),
  [5] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 0, 0, 0),
  [7] = {.entry = {.count = 1, .reusable = true}}, SHIFT(16),
  [9] = {.entry = {.count = 1, .reusable = true}}, SHIFT(2),
  [11] = {.entry = {.count = 1, .reusable = true}}, SHIFT(21),
  [13] = {.entry = {.count = 1, .reusable = true}}, SHIFT(18),
  [15] = {.entry = {.count = 1, .reusable = true}}, SHIFT(9),
  [17] = {.entry = {.count = 1, .reusable = true}}, SHIFT(4),
  [19] = {.entry = {.count = 1, .reusable = true}}, SHIFT(11),
  [21] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_document, 1, 0, 0),
  [23] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 1, 0, 0),
  [25] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0),
  [27] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(16),
  [30] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(2),
  [33] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(21),
  [36] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(18),
  [39] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_document_repeat1, 2, 0, 0), SHIFT_REPEAT(9),
  [42] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 2, 0, 0),
  [44] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_string, 3, 0, 0),
  [46] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 3, 0, 0),
  [48] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym__value, 1, 0, 0),
  [50] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 2, 0, 0),
  [52] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 2, 0, 0),
  [54] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 3, 0, 0),
  [56] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_object, 4, 0, 0),
  [58] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_array, 4, 0, 0),
  [60] = {.entry = {.count = 1, .reusable = true}}, SHIFT(17),
  [62] = {.entry = {.count = 1, .reusable = true}}, SHIFT(10),
  [64] = {.entry = {.count = 1, .reusable = true}}, SHIFT(35),
  [66] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 1, 0, 0),
  [68] = {.entry = {.count = 1, .reusable = false}}, SHIFT(6),
  [70] = {.entry = {.count = 1, .reusable = true}}, SHIFT(19),
  [72] = {.entry = {.count = 1, .reusable = false}}, SHIFT_EXTRA(),
  [74] = {.entry = {.count = 1, .reusable = false}}, SHIFT(7),
  [76] = {.entry = {.count = 1, .reusable = true}}, SHIFT(22),
  [78] = {.entry = {.count = 1, .reusable = true}}, SHIFT(23),
  [80] = {.entry = {.count = 1, .reusable = true}}, SHIFT(20),
  [82] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0),
  [84] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat2, 2, 0, 0), SHIFT_REPEAT(22),
  [87] = {.entry = {.count = 1, .reusable = false}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0),
  [89] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_string_repeat1, 2, 0, 0), SHIFT_REPEAT(23),
  [92] = {.entry = {.count = 1, .reusable = true}}, SHIFT(8),
  [94] = {.entry = {.count = 1, .reusable = true}}, SHIFT(12),
  [96] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0), SHIFT_REPEAT(4),
  [99] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_array_repeat1, 2, 0, 0),
  [101] = {.entry = {.count = 2, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0), SHIFT_REPEAT(17),
  [104] = {.entry = {.count = 1, .reusable = true}}, REDUCE(aux_sym_object_repeat1, 2, 0, 0),
  [106] = {.entry = {.count = 1, .reusable = true}}, SHIFT(15),
  [108] = {.entry = {.count = 1, .reusable = true}}, SHIFT(14),
  [110] = {.entry = {.count = 1, .reusable = true}}, REDUCE(sym_pair, 3, 0, 1),
  [112] = {.entry = {.count = 1, .reusable = true}}, SHIFT(13),
  [114] = {.entry = {.count = 1, .reusable = true}},  ACCEPT_INPUT(),
};

#ifdef __cplusplus
extern "C" {
#endif
#ifdef TREE_SITTER_HIDE_SYMBOLS
#define TS_PUBLIC
#elif defined(_WIN32)
#define TS_PUBLIC __declspec(dllexport)
#else
#define TS_PUBLIC __attribute__((visibility("default")))
#endif

TS_PUBLIC const TSLanguage *tree_sitter_jsdn(void) {
  static const TSLanguage language = {
    .version = LANGUAGE_VERSION,
    .symbol_count = SYMBOL_COUNT,
    .alias_count = ALIAS_COUNT,
    .token_count = TOKEN_COUNT,
    .external_token_count = EXTERNAL_TOKEN_COUNT,
    .state_count = STATE_COUNT,
    .large_state_count = LARGE_STATE_COUNT,
    .production_id_count = PRODUCTION_ID_COUNT,
    .field_count = FIELD_COUNT,
    .max_alias_sequence_length = MAX_ALIAS_SEQUENCE_LENGTH,
    .parse_table = &ts_parse_table[0][0],
    .small_parse_table = ts_small_parse_table,
    .small_parse_table_map = ts_small_parse_table_map,
    .parse_actions = ts_parse_actions,
    .symbol_names = ts_symbol_names,
    .field_names = ts_field_names,
    .field_map_slices = ts_field_map_slices,
    .field_map_entries = ts_field_map_entries,
    .symbol_metadata = ts_symbol_metadata,
    .public_symbol_map = ts_symbol_map,
    .alias_map = ts_non_terminal_alias_map,
    .alias_sequences = &ts_alias_sequences[0][0],
    .lex_modes = ts_lex_modes,
    .lex_fn = ts_lex,
    .primary_state_ids = ts_primary_state_ids,
  };
  return &language;
}
#ifdef __cplusplus
}
#endif
