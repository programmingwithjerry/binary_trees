#include "binary_trees.h"
/**
 * binary_tree_node - Initializes a new binary tree node.
 * @parent: Pointer to the parent node of the node being created.
 * @value: The value to assign to the new node.
 *
 * Return: NULL if an error occurs.
 *         Otherwise, a pointer to the newly created node.
 */


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* Allocate memory for the new node*/
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (!new_node)
		return (NULL);

	/*Initialize the new node*/
	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
