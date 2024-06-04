#include "binary_trees.h"

/**
 * binary_tree_nodes - Counts the nodes with at least 1 child in a binary tree.
 * @tree: A pointer to the root node of the tree to count the number of nodes.
 *
 * This function counts the number of nodes in a binary tree
 * that have at least one child.
 *
 * Return: If tree is NULL, the function must return 0, else return
 * the count of nodes.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0; /* Initialize count of nodes */

	if (tree) /* If the current node exists (i.e., not NULL) */
	{
		/* Increment nodes if the current node has at least one child */
		nodes += (tree->left || tree->right) ? 1 : 0;

		/* Recursively count nodes in the left subtree */
		nodes += binary_tree_nodes(tree->left);
		/* Recursively count nodes in the right subtree */
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes); /* Return the total count of nodes */
}

