#include "binary_trees.h"
/**
 * binary_tree_height - a function that measures the height of a tree
 * @tree: the tree to measure
 * Return: the height of the tree or 0.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0;
	size_t right_height = 0;

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
 * binary_tree_balance - a function that measures the balance factor of a
 * binary tree
 * @tree: the root node of the tree to measure the balance factor
 * Return: the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int leftheight = 0, rightheight = 0;

	if (tree == NULL)
		return (0);
	if (tree->left != NULL)
		leftheight = 1 + binary_tree_height(tree->left);
	if (tree->right != NULL)
		rightheight = 1 + binary_tree_height(tree->right);

	return (leftheight - rightheight);
}

