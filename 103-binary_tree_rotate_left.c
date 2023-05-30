#include "binary_trees.h"

/**
 * binary_tree_rotate_left - a function that performs a left rotate on a tree
 * @tree: the tree to perform the rotatation on
 * Return: the root of the rotated tree
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *root_after;

	if (tree == NULL || tree->right == NULL)
		return (tree);

	root_after = tree->right;

	if (root_after->left != NULL)
	{
		tree->right = root_after->left;
		root_after->left->parent = tree;
	}
	else
	{
		tree->right = NULL;
	}
	root_after->left = tree;
	root_after->parent = tree->parent;
	tree->parent = root_after;

	return (root_after);
}
