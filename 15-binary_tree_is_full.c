#include "binary_trees.h"

/**
 * binary_tree_is_full - CHECKS IF a binary tree is FULL.
 * @tree: a Pointer the root NODE Of the Tree to check.
 * Return: 1 IF the tree is full.
 *         0 IF the tree is not full.
 *         0 IF tree is null.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	if (tree->right && tree->left)
		return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));

	return (0);
}
