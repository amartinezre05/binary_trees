#include "binary_trees.h"

/**
* binary_tree_depth - depth of a node
* @tree:  a pointer
*
* Return: size_t
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t counter = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		counter++;
		tree = tree->parent;
	}
	return (counter);
}
