#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the nodes with at least 1 child in a binary tree
 *
 * @tree: Pointer to the root node of the tree
 *
 * Return: number of nodes with a child in the binary tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes_left;
	size_t nodes_right;

	if (tree == NULL)
		return (0);

	nodes_left = binary_tree_nodes(tree->left);
	nodes_right = binary_tree_nodes(tree->right);
	if (tree->left == NULL && tree->right == NULL)
		return (nodes_left + nodes_right);
	else
		return (nodes_left + nodes_right + 1);
}
