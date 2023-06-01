#include "binary_trees.h"
#include <limits.h>

/**
 * is_bst_helper - a function that helps to check if tree is a valid BST
 * @tree: the root node of the tree to check
 * @min: the minimum number in the tree
 * @max: the maximum number in the tree
 * Return: 1 for true and 0 for false
 */
int is_bst_helper(const binary_tree_t *tree, int min, int max)
{
	if (tree == NULL)
		return (1);

	if (tree->n <= min || tree->n >= max)
		return (0);
	return (is_bst_helper(tree->left, min, tree->n) &&
		is_bst_helper(tree->right, tree->n, max));
}
/**
 * binary_tree_is_bst - a function that checks if binary tree is a valid BST
 * @tree: the root node of the tree to check
 * Return: 1 if valid otherwise 0.
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (is_bst_helper(tree, INT_MIN, INT_MAX));
}
