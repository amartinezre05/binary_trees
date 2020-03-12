#include "binary_trees.h"

/**
* binary_tree_insert_right - creates a node
* @parent: a pointer
* @value: int
* Return: node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	if (parent->right == NULL)
	{
		parent->right = new;
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
	}
	else
	{
		new->right = parent->right;
		parent->right = new;
		new->left = NULL;
		new->parent = parent;
		new->right->parent = new;
	}
	return (new);
}
