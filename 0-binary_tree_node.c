#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - a function that creates a binary tree node
 * @parent: the pointer to the parent node of the node to create
 * @value: the value of the new node
 * Return: the newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
