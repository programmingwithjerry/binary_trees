#include "binary_trees.h"

/**
 * binary_tree_insert_left - Adds a node as the left child of
 *                           a given node in a binary tree.
 * @parent: Pointer to the node to which the left child is added.
 * @value: The value to assign to the new node.
 *
 * Return: If parent is NULL or if an error occurs, returns NULL.
 *         Otherwise, returns a pointer to the new node.
 *
 * Description: If the parent node already has a left child, the new node
 *              takes its place, and the old left child becomes the
 *              left child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);

	/*Create the new node*/
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);

	/*If parent already has a left child, adjust pointers*/
	if (parent->left)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	/*Insert the new node as the left child*/
	parent->left = new_node;

	return (new_node);
}
