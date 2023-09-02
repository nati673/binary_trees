#include "binary_trees.h"

/**
 * binary_tree_balance - Measures the Balance Fact of a bin-tree
 * @tree: Pointer to the root node of the tree to Measure the balance Fact
 * Return: the balance factor
 *         0 if tree is null
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_l, height_r;

	if (!tree)
		return (0);

	height_l = tree->left ? (int)binary_tree_height(tree->left) : -1;
	height_r = tree->right ? (int)binary_tree_height(tree->right) : -1;

	return (height_l - height_r);
}

/**
 * binary_tree_height - Measures the Height of a bina-tree
 * @tree: tree to Measure the height of
 *
 * Return: Height of the tree
 *         0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
