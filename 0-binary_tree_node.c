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
binary_tree_t *news;
news = malloc(sizeof(binary_tree_t));
if (!news)
return (NULL);
news->n = value;
news->parent = parent;
news->left = NULL;
news->right = NULL;
return (news);
}
