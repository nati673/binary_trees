#include "binary_trees.h"

/**
 * binary_tree_node - crate binary tree node.
 * @parent: to the parent of the node to create new.
 * @value: value to put in the new node.
 *
 * return: If an error occurs - NULL.
 *         otherwise - pointer new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_n;

    new_n = malloc(sizeof(binary_tree_t));
    if (!new_n)
        return (NULL);
    new_n->n = value;
    new_n->parent = parent;
    new_n->left = NULL;
    new_n->right = NULL;
    return (new_n);
}
