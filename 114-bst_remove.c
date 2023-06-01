#include "binary_trees.h"

/**
 * bst_remove_help - a function that helps in the removal of a node
 * from a BST
 * @root: the root node of the tree to remove from
 * Return: the minimum node
 */
bst_t *bst_remove_help(bst_t *root)
{
	if (root == NULL)
	{
		return (NULL);
	}

	while (root->left != NULL)
	{
		root = root->left;
	}
	return (root);
}

/**
 * bst_remove - a function that removes a node from  a BST
 * @root: the root node of the tree to remove from
 * @value: the value of the node to remove
 * Return: the new root node of the tree
 */
bst_t *bst_remove(bst_t *root, int value)
{
	bst_t *tmp;

	if (root == NULL)
		return (root);
	if (root->n > value)
		root->left = bst_remove(root->left, value);
	else if (root->n < value)
		root->right = bst_remove(root->right, value);
	else
	{
		if (root->left == NULL)
		{
			tmp = root->right;
			free(root);
			return (tmp);
		}
		else if (root->right == NULL)
		{
			tmp = root->left;
			free(root);
			return (tmp);
		}
		tmp = bst_remove_help(root->right);
		root->n = tmp->n;
		root->right = bst_remove(root->right, tmp->n);
	}
	return (root);
}
