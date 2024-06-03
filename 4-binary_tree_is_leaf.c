#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Determines if a given node is a
 * leaf in a binary tree.
 * @node: Pointer to the node to check.
 *
 * Return: 1 if the node is a leaf.
 *         0 otherwise.
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	/*A node is a leaf if it is not NULL and has no children */
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
