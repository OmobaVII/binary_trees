#include "binary_trees.h"

/**
 * binary_tree_is_full - a function that checks if a binary tree is full
 * @tree: the binary tree to check
 * Return: 1 if full otherwise 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left, right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if ((tree->left != NULL) && (tree->right != NULL))
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

		if (left == right)
			return (1);
	}

	return (0);
}
