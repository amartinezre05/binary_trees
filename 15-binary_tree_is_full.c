#include "binary_trees.h"

/**
* binary_tree_is_full - is full
* @tree: a pointer
*
* Return: int
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	else
		return (binary_tree_is_full(tree->left) ==
binary_tree_is_full(tree->right));
return (0);
}
