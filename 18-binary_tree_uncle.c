#include "binary_trees.h"

/**
 * binary_tree_uncle - Find the uncle of a node in a binary tree
 *
 * @node: Pointer to the node to find the uncle
 *
 * Return: Pointer to the uncle node or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *left_uncle;
	binary_tree_t *right_uncle;
	binary_tree_t *grand_father;

	grand_father = node->parent->parent;
	if (node == NULL || grand_father == NULL)
		return (NULL);

	left_uncle = grand_father->left;
	right_uncle = grand_father->right;
	if (node->parent == left_uncle && right_uncle != NULL)
		return (right_uncle);

	if (node->parent == right_uncle && left_uncle != NULL)
		return (left_uncle);

	return (NULL);
}
