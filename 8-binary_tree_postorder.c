#include "binary_trees.h"

/**
 * binary_tree_postorder - Goes Through a Binary using post-order-traverse.
 * @tree: Tree to traverse.
 * @func: Pointer to a FUNC to call for each Node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
