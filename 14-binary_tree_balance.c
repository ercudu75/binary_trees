#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: Height of the binary tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;

	if (!tree)
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (MAX(leftHeight, rightHeight) + 1);
}
/**
 * binary_tree_balance - Measures the balance factor of a binary tree
 * @tree: A pointer to the root node of the binary tree
 *
 * Return: Balance factor of the binary tree or 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_h_subtree, right_h_subtree, balance_factor;

	if (!tree)
		return (0);

	left_h_subtree = binary_tree_height(tree->left);
	right_h_subtree = binary_tree_height(tree->right);
	balance_factor = left_h_subtree - right_h_subtree;

	return (balance_factor);
}
