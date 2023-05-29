#include "binary_trees.h"

/**
 * binary_tree_height - a function that measures the height of a binary tree
 * @tree: the tree to measure
 * Return: the height of the tree or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	if (tree == NULL || (tree->right == NULL && tree->left == NULL))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
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
/**
 * binary_tree_is_perfect - a function that checks if a binary tree is perfect
 * @tree: the root node of the tree to check
 * Return: Return 0 is not perfect else return 1
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left, right, sizeleft, sizeright;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left != NULL && tree->right != NULL)
	{
		left = binary_tree_height(tree->left);
		right = binary_tree_height(tree->right);
		sizeleft = binary_tree_size(tree->left);
		sizeright = binary_tree_size(tree->right);
		if (right == left && sizeright == sizeleft)
			return (1);
	}
	return (0);
}
