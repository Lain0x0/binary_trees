#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode = malloc(sizeof(binary_tree_t));

	if (Newnode != NULL)
	{
		Newnode->parent = parent;
		Newnode->left = NULL;
		Newnode->right = NULL;
		Newnode->value = value;
	}

	else if (Newnode == NULL)
		return (NULL);

	return (Newnode);
}
