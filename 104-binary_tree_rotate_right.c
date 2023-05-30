#include "binary_trees.h"

/**
 * binary_tree_rotate_right - a function that performs a right rotate on a tree
 * @tree: the tree to rotate
 * Return: the root of the tree after rotation
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *root_after;

	if (tree == NULL || tree->left == NULL)
		return (tree);

	root_after = tree->left;

	if (root_after->right != NULL)
	{
		tree->left = root_after->right;
		root_after->right->parent = tree;
	}
	else
	{
		tree->left = NULL;
	}
	root_after->right = tree;
	root_after->parent = tree->parent;
	tree->parent = root_after;

	return (root_after);
}
