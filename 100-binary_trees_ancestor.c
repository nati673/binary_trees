#include "binary_trees.h"

/**
 * binary_trees_ancestor - FINDS the lowest common ancestor of two NODE.
 * @first: Pointer to the First NODE to find the ancestor.
 * @second: Pointer to the Second NODE to FIND the ancestor.
 * Return: Pointer to the ancestor NODE.
 *         null if there is no ancestor NODE.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				     const binary_tree_t *second)
{
	size_t depth_first, depth_second;

	if (!first || !second)
		return (NULL);

	depth_first = binary_tree_depth(first);
	depth_second = binary_tree_depth(second);

	while (depth_first > depth_second)
	{
		first = first->parent;
		depth_first--;
	}
	while (depth_second > depth_first)
	{
		second = second->parent;
		depth_second--;
	}
	while (first && second)
	{
		if (first == second)
			return ((binary_tree_t *)first);
		first = first->parent;
		second = second->parent;
	}
	return ((binary_tree_t *)first);
}

/**
 * binary_tree_depth - Measures The Depth of a NODE in a Binary Tree.
 * @tree: NODE to calculate the Depth of.
 * Return: Depth of the NODE.
 *         0 If Tree is null.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
