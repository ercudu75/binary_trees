#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child of another node
 * @parent: Pointer to the node to insert the right child in
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *old_node;

	if (!parent)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node = binary_tree_node(parent, value);
		old_node = parent->right;
		parent->right = new_node;
		new_node->parent = parent;
		new_node->right = old_node;
		old_node->parent = new_node;
	}
	else
	{
		parent->right = binary_tree_node(parent, value);
	}

	return (parent->right);
}
