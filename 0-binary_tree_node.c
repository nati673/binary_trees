#include "binary_trees.h"

/**
 * binary_tree_node - crate binary tree node.
 * @parent:  to create new.
 * @value: value to put in the news node.
 *
 * return: If an error occurs - NULL.
 *         otherwise - pointer news node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *news;
news = malloc(sizeof(binary_tree_t));
if (news == NULL)
return (NULL);
news->n = value;
news-n->parent = parent;
news-n->left = NULL;
news-n->right = NULL;
return (news);
}
