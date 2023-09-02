#include "binary_trees.h"

/**
 * binary_tree_size - Measures the Size of a Binary-Tree
 * @tree: tree to Measure the Size of
 * Return: Size of the Tree
 *         0 if tree is null
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}
