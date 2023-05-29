#include "binary_trees.h"

/**
 * binary_tree_insert_left - a function that inserts a node as the left
 * child of another node
 * @parent: a pointer to the node to insert the left child
 * @value: the value to store in the new node
 * Return: the new node or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *leftnode;

	if (parent == NULL)
		return (NULL);

	leftnode = malloc(sizeof(binary_tree_t));
	if (leftnode == NULL)
		return (NULL);

	leftnode->parent = parent;
	leftnode->n = value;
	leftnode->left = NULL;
	leftnode->right = NULL;

	if (parent->left == NULL)
		parent->left = leftnode;
	else
	{
		leftnode->left = parent->left;
		parent->left->parent = leftnode;
		parent->left = leftnode;
	}

	return (leftnode);
}
