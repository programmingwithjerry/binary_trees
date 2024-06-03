#include "binary_trees.h"

/**
 * binary_tree_insert_right - Adds a node as the right child of
 *                            a given node in a binary tree.
 * @parent: Pointer to the node to insert the right child into.
 * @value: The value to assign to the new node.
 *
 * Return: If parent is NULL or if an error occurs - returns NULL.
 *         Otherwise, returns a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	/* Allocate memory and initialize the new node*/
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	/* If parent already has a right child, adjust pointers*/
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	/*Set the new node as the right child of the parent*/
	parent->right = new_node;

	return (new_node);
}

