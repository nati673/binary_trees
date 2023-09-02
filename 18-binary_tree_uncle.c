#include "binary_trees.h"

/**
 * binary_tree_uncle - FINDS the uncle of a NODE
 * @node: a pointer to the NODE to find the uncle
 * Return: pointer to the uncle node
 *         null if NODE is null
 *         null if the parent is null
 *         null if the NODE has no uncle
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	return (binary_tree_sibling(node->parent));
}

/**
 * binary_tree_sibling - FIND- the sibling of a NODE
 * @node: Pointer to the NOD to find the Sibling
 * Return: pointer to the sibling node
 *         null if node is NULL
 *         null if the parent is null
 *         null if the NODE has no siblings
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	return (node->parent->left);
}
