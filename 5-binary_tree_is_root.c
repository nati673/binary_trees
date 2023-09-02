#include "binary_trees.h"

/**
 * binary_tree_is_root - Check if a Node is-a-root
 * @node: Node-To-Check
 * Return: 1-if Node is a root
 *         0-if Not a root
 *         0-if Node is Null
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	return ((!node || node->parent) ? 0 : 1);
}
