#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the Leaves in a Binary-Tree
 * @tree: tree to Count the Leaves from
 *
 * Return: Number of Leaves
 *         0 If tree is null
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
