#include "binary_trees.h"
/**
 * bst_search - a function that searches for a value in a BST
 * @tree: the root node of the bst tree
 * @value: the value to search for
 * Return: the node containing the value or NULL if nothing found
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	if (tree == NULL)
	{
		return (NULL);
	}

	if (tree->n == value)
	{
		return ((bst_t *) tree);
	}
	else if (tree->n > value)
	{
		return (bst_search(tree->left, value));
	}
	else
		return (bst_search(tree->right, value));
}

