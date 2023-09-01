#include "binary_trees.h"

/**
 * binary_tree_node - crate binary tree node.
 * @parent:  to create new.
 * @value: value to put in the new node.
 *
 * return: If an error occurs - NULL.
 *         otherwise - pointer new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *new-n;
new-n = malloc(sizeof(binary_tree_t));
if (!new-n)
return (NULL);
new-n->n = value;
new-n->parent = parent;
new-n->left = NULL;
new-n->right = NULL;
return (new-n);
}
