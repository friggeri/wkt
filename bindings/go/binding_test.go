package tree_sitter_workoutlang_test

import (
	"testing"

	tree_sitter "github.com/smacker/go-tree-sitter"
	"github.com/tree-sitter/tree-sitter-workoutlang"
)

func TestCanLoadGrammar(t *testing.T) {
	language := tree_sitter.NewLanguage(tree_sitter_workoutlang.Language())
	if language == nil {
		t.Errorf("Error loading Workoutlang grammar")
	}
}
