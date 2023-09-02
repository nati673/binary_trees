#include "binary_trees.h"

/**
 * binary_tree_insert_left - INSERTS node as the left-child of another NODE
 * @parent: Pointer to the node to insert the left-child in
 * @value: Value to store in the New-node
 *
 * Return: Pointer to the NEWLY created node
 *         null on failure
 *         null if parent is Null
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->right = NULL;
	new->left = parent->left;
	parent->left = new;
	if (new->left)
		new->left->parent = new;
	return (new);
}
