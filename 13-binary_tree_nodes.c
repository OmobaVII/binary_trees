#include "binary_trees.h"

/**
 * binary_tree_nodes - a function that counts the number of nodes with at
 * least 1 child in a binary tree
 * @tree: the root node of the tree to count the number of nodes
 * Return: the number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t leftnodes, rightnodes;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);
	leftnodes = binary_tree_nodes(tree->left);
	rightnodes = binary_tree_nodes(tree->right);
	return (1 + leftnodes + rightnodes);
}
