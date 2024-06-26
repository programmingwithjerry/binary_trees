#include "binary_trees.h"

/**
 * binary_tree_is_root - Determines if a node is the root of a binary tree.
 * @node: Pointer to the node to be checked.
 *
 * Return: 1 if the node is a root.
 *         Otherwise, 0.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}

