#include "binary_trees.h"

/**
 * binary_tree_is_perfect - Check if a binary tree is Perfect.
 * @tree: Point- to the root NODE of the Tree to Check.
 * Return: 1 IF the tree is perfect.
 *         0 IF the tree is not perfect.
 *         0 IF tree is null.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0;
	size_t nodes = 0;
	size_t power = 0;

	if (!tree)
		return (0);

	if (!tree->right && !tree->left)
		return (1);

	height = binary_tree_height(tree);
	nodes = binary_tree_size(tree);

	power = (size_t)_pow_recursion(2, height + 1);
	return (power - 1 == nodes);
}

/**
 *_pow_recursion - returns the value of x raised to the power of y
 *@x: The VAL to exponentiate
 *@y: The power to raise x to
 *Return: X to the Power of y, or -1 if y is NEG
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	else
		return (x * _pow_recursion(x, y - 1));

}

/**
 * binary_tree_size - Measures the size of a Binary Tree.
 * @tree: tree to Measure the size of.
 * Return: Size of the tree.
 *         0 if tree is null.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1);
}

/**
 * binary_tree_height - Measures the Height of a Binary Tree
 * @tree: tree to Measure the height of
 * Return: height of the tree
 *         0 if tree is null
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_l = 0;
	size_t height_r = 0;

	if (!tree)
		return (0);

	height_l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	height_r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
	return (height_l > height_r ? height_l : height_r);
}
