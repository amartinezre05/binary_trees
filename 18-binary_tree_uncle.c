#include "binary_trees.h"
/**
* binary_tree_sibling - finds sibling
* @node: a pointer
*
* Return: node is sibling
*/
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node->parent->left && node->parent->right)
	{
		if (node == node->parent->right)
			return (node->parent->left);
		else
			return (node->parent->right);
	}
return (NULL);
}
/**
* binary_tree_uncle - finds uncle
* @node: a pointer
*
* Return: node is uncle
*/
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL)
		return (NULL);

	if (node->parent)
		return (binary_tree_sibling(node->parent));
return (NULL);
}
