#include "binary_trees.h"

/**
 * binary_tree_leaves - Counts the leaves in a binary tree.
 * @tree: A pointer to the root node of the tree to count the leaves of.
 * This function counts the number of leaves (nodes with no children)
 * in a given binary tree.
 * Return: The number of leaves in the tree.
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0; /*Initialize count of leaves*/

	if (tree) /*If the current node exists (i.e., not NULL)*/
	{
		/*Increment leaves if the current node is a leaf node*/
		leaves += (!tree->left && !tree->right) ? 1 : 0;

		/*Recursively count leaves in the left subtree*/
		leaves += binary_tree_leaves(tree->left);

		/*Recursively count leaves in the right subtree*/
		leaves += binary_tree_leaves(tree->right);
	}
	return (leaves); /*Return the total count of leaves*/
}

