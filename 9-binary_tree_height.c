#include "binary_trees.h"

/**
* binary_tree_height - height
* @tree: a pointer
*
* Return: size_t
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t sum_left = 0, sum_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		sum_left = 1 + binary_tree_height(tree->left);
	if (tree->right)
		sum_right = 1 + binary_tree_height(tree->right);
	if (sum_left >= sum_right)
		return (sum_left);
	else
		return (sum_right);
}
