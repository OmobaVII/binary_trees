#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree
 * @tree: the root node of the tree to measure
 * Return: the size of the tree or 0 if null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t leftsize, rightsize;

	if (tree == NULL)
		return (0);
	leftsize = binary_tree_size(tree->left);
	rightsize = binary_tree_size(tree->right);
	return (1 + leftsize + rightsize);
}
