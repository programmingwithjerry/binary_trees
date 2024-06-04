#include "binary_trees.h"

/**
 * binary_tree_size - Calculates the size of a binary tree.
 * @tree: Pointer to the root node of the tree to measure the size of.
 *
 * Return: The size of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0; /*Initialize size counter*/

	if (tree) /* If the current node exists (i.e., not NULL)*/
	{
		size += 1; /*Increment size for the current node*/
		/*Recursively calculate size of left subtree */
		size += binary_tree_size(tree->left);
		/*Recursively calculate size of right subtree */
		size += binary_tree_size(tree->right);
	}
	return (size); /* Return the total size of the tree*/
}

