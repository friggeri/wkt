package tree_sitter_wkt_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-wkt"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_wkt.Language())
	if language == nil {
		t.Errorf("Error loading wkt grammar")
	}
}
