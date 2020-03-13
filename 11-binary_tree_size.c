#include "binary_trees.h"

/**
* binary_tree_size - size
* @tree: a pointer
*
* Return: size_t
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t sum_left = 1, sum_right = 1, sum = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		sum_left = binary_tree_size(tree->left) + 1;
	if (tree->right)
		sum_right = binary_tree_size(tree->right) + 1;
sum = (sum_left + sum_right) - 1;
return (sum);
}
