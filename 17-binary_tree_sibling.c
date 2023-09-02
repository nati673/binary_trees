#include "binary_trees.h"

/**
 * binary_tree_sibling - Finds the Sibling of a NODE.
 * @node: Pointer to the node to find the Sibling.
 * Return: pointer to the sibling NODE.
 *         null if node is null.
 *         null if the parent is null.
 *         null if the NODE has no Siblings.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
