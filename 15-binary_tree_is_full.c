#include "binary_trees.h"

/**
 * binary_tree_is_full - check if a tree is full or not
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: return 1 if full 0 if not
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t left_side;
	size_t right_side;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	left_side = binary_tree_is_full(tree->left);
	right_side = binary_tree_is_full(tree->right);
	if (left_side == 0 || right_side == 0)
		return (0);
	return (1);
}
