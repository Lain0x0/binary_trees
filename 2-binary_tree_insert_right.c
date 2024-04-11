#include "binary_trees.h"


/**
 * binary_tree_node_X - creates a binary tree node
 * @parent: parnt of the node to create
 * @value: value to store in new node
 *
 * Return: pointer to the new node
 */
binary_tree_t *binary_tree_node_X(binary_tree_t *parent, int value)
{
	binary_tree_t *Newnode;

	Newnode = malloc(sizeof(binary_tree_t));
	if (Newnode == NULL)
		return (NULL);
	Newnode->parent = parent;
	Newnode->n = value;
	Newnode->left = Newnode->right = NULL;
	return (Newnode);
}

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_child;

	if (parent == NULL)
		return (NULL);
	right_child = binary_tree_node_2(parent, value);
	if (right_child == NULL)
		return (NULL);
	right_child->right = parent->right;
	if (right_child->right != NULL)
		right_child->right->parent = right_child;
	parent->right = right_child;
	return (right_child);
}
