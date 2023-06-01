#include "binary_trees.h"

/**
 * bst_insert - a function that inserts a value in a binary search tree
 * @tree: the tree to insert into
 * @value: the value of the new node inserted
 * Return: the new node or NULL if failed
 */
bst_t *bst_insert(bst_t **tree, int value)
{
	bst_t *root;

	if (tree != NULL)
	{
		if (*tree == NULL)
		{
			*tree = binary_tree_node(NULL, value);
			return (*tree);
		}
		root = *tree;
		while (root != NULL)
		{
			if (value == root->n)
			{
				break;
			}
			if (value > root->n)
			{
				if (root->right == NULL)
				{
					root->right = binary_tree_node(root, value);
					return (root->right);
				}
				root = root->right;
			}
			if (value < root->n)
			{
				if (root->left == NULL)
				{
					root->left = binary_tree_node(root, value);
					return (root->left);
				}
				root = root->left;
			}
		}
	}
	return (NULL);

}
