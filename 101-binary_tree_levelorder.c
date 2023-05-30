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

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (1 + left_height);
	else
		return (1 + right_height);
}
/**
 * current_level - a function that prints all nodes a level
 * @tree: the root node of the tree
 * @level: the level to print nodes from
 * @func: the function that prints the node
 * Return: Void
 */
void current_level(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	else if (level > 1)
	{
		current_level(tree->left, func, level - 1);
		current_level(tree->right, func, level - 1);
	}
}
/**
 * binary_tree_levelorder - a function that traversal a tree in level order
 * @tree: the root node of the tree to traverse
 * @func: a function that call each node
 * Return: Void
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t h, a;

	if (tree == NULL || func == NULL)
		return;
	h = binary_tree_height(tree);
	for (a = 1; a <= h; a++)
	{
		current_level(tree, func, a);
	}
}
