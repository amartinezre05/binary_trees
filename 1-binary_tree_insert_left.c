#include "binary_trees.h"

/**
* binary_tree_insert_left - creates a node
* @parent: a pointer
* @value: int
* Return: node
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);
	new->n = value;
	if (parent->left == NULL)
	{
		parent->left = new;
		new->left = NULL;
		new->right = NULL;
		new->parent = parent;
	}
	else
	{
		new->left = parent->left;
		parent->left = new;
		new->right = NULL;
		new->parent = parent;
		new->left->parent = new;
	}
	return (new);
}
