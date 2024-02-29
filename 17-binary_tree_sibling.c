#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node in a binary tree
 *
 * @node: Pointer to the node to find the sibling
 *
 * Return: Pointer to the sibling node or NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *left_child;
	binary_tree_t *right_child;

	if (node == NULL || node->parent == NULL)
		return (NULL);

	left_child = node->parent->left;
	right_child = node->parent->right;
	if (node == left_child && right_child != NULL)
		return (right_child);

	if (node == right_child && left_child != NULL)
		return (left_child);

	return (NULL);
}
