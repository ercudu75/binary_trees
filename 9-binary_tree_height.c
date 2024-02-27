#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t leftHeight, rightHeight;
	if (!tree || (tree && !tree->left && !tree->right))
		return (0);

	leftHeight = binary_tree_height(tree->left);
	rightHeight = binary_tree_height(tree->right);
	return (MAX(leftHeight, rightHeight) + 1);
}
