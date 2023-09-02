#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes Through a Binary Tree using pre-order-traversal.
 * @tree: tree to Traverse.
 * @func: Pointer To a FUN to CALL for each Node.
 *
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*function)(int))
{
	if (!tree || !function)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, function);
	binary_tree_preorder(tree->right, function);
}
