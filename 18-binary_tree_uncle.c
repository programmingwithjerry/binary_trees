#include "binary_trees.h"

/**
 * binary_tree_uncle - Finds the uncle of a given node in a binary tree.
 * @node: A pointer to the node to find the uncle of.
 *
 * This function finds the uncle of a given node in a binary tree. The uncle
 * is the sibling of the node's parent. If the node is NULL, has no parent, or
 * has no grandparent, the function returns NULL; otherwise, it returns a
 * pointer to the uncle node.
 *
 * Return: If node is NULL or has no uncle, NULL.
 *         Otherwise, a pointer to the uncle node.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL ||
	    node->parent == NULL ||
	    node->parent->parent == NULL)
		return (NULL); /*
				* If node is NULL, has no parent,
				* or no grandparent, return NULL
				*/

	/*
	 * If the parent of the node is the left child of its parent,
	 * return the right child of the parent's parent
	 */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/*
	 * If the parent of the node is the right child of its parent,
	 * return the left child of the parent's parent
	 */
	return (node->parent->parent->left);
}

