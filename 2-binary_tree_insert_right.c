#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts a node as the right
 * child of another node
 * @parent: a pointer to the node to to insert the right child in
 * @value: the value to store in the new node
 * Return: the newly created node of NULL if failed
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *rightnode;

	if (parent == NULL)
		return (NULL);
	rightnode = malloc(sizeof(binary_tree_t));
	if (rightnode == NULL)
		return (NULL);
	rightnode->n = value;
	rightnode->parent = parent;
	rightnode->left = NULL;
	rightnode->right = NULL;
	if (parent->right == NULL)
		parent->right = rightnode;
	else
	{
		rightnode->right = parent->right;
		parent->right->parent = rightnode;
		parent->right = rightnode;
	}
	return (rightnode);
}
