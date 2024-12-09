package tree_sitter_jsdn_test

import (
	"testing"

	tree_sitter "github.com/tree-sitter/go-tree-sitter"
	tree_sitter_jsdn "github.com/dominictassio/jsdn/bindings/go"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_jsdn.Language())
	if language == nil {
		t.Errorf("Error loading Jsdn grammar")
	}
}
