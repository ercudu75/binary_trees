#include "binary_trees.h"

/**
 * binary_tree_is_root - Checks if a node is a root
 *
 * @node: Pointer to the node to check
 *
 * Return: return 0 if @node is null, 1 if @node is a root, and 0 otherwise
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->left != NULL && node->right != NULL)
		return (1);
	else
		return (0);
}
