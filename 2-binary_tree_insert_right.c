#include "binary_trees.h"

/**
 * binary_tree_insert_right - INS NODE as the right--child of another NODE.
 * @parent: POINTER to-the node to INS the right--child in.
 * @value: VAL To store in the new NODE.
 * Return: Pointer to the newly created NODE
 *         Null on failure
 *         Null if parent is null
 *
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (!parent)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (!new)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = parent->right;
	parent->right = new;
	if (new->right)
		new->right->parent = new;
	return (new);
}
