#include "binary_trees.h"

/**
 * binary_tree_leaves - Count the leaves of a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: number of leaves in the binary tree
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves_left;
	size_t leaves_right;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves_left = binary_tree_leaves(tree->left);
	leaves_right = binary_tree_leaves(tree->right);
	return (leaves_left + leaves_right);
}

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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: Pointer to the root node of the tree to measure
 *
 * Return: 1 if perfect, 0 otherwise
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height, right_height, left_leaves, right_leaves;

	if (!tree)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	left_leaves = binary_tree_leaves(tree->left);
	right_leaves = binary_tree_leaves(tree->right);

	if (left_height == right_height && left_leaves == right_leaves)
		return (1);

	return (0);
}
