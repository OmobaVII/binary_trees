#include "binary_trees.h"

/**
 * binary_trees_ancestor - a function that finds the lowest common ancestor of
 * two nodes
 * @first: the first node
 * @second: the second node
 * Return: the common lowest common ancestor or NULL is no common ancestor
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *parent_first, *parent_second, *lca;

	if (first == NULL || second == NULL)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)(second));
	parent_first = first->parent;
	parent_second = second->parent;

	if (first == parent_second || parent_first == NULL || (parent_first->parent == NULL && parent_second != NULL))
	{
		lca = binary_trees_ancestor(first, parent_second);
		return (lca);
	}
	if (second == parent_first || parent_second == NULL || (parent_second->parent == NULL && parent_first != NULL))
	{
		lca = binary_trees_ancestor(second, parent_first);
		return (lca);
	}
	return (binary_trees_ancestor(parent_first, parent_second));
}
