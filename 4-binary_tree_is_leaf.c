#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a NODE is-a-leaf
 * @node: Node to Check.
 * Return: 1 if Node is a-leaf
 *         0 if not a leaf
 *         0 if node is NULL
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	return ((!node || node->left || node->right) ? 0 : 1);
}
