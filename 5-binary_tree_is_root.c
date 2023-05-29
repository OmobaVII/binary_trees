#include "binary_trees.h"
/**
 * binary_tree_is_root - a function that checks if a given node is a root
 * @node: the node to check is it is a root
 * Return: 1 if root otherwise 0
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}

	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
