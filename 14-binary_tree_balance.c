#include "binary_trees.h"

/**
 * binary_tree_balance - Calculates the balance factor of a binary tree.
 * @tree: A pointer to the root node of the tree to calculate the balance
 * factor.
 *
 * This function calculates the balance factor of a binary tree, which is
 * the difference between the height of its left subtree and the height of its
 * right subtree. A positive balance factor indicates the tree is left-heavy,
 * while a negative balance factor indicates the tree is right-heavy.
 *
 * Return: If tree is NULL, return 0, else return the balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree) /* If the current node exists (i.e., not NULL) */
		/* Calculate balance factor */
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	return (0); /* If tree is NULL, return 0 */
}

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: A pointer to the root node of the tree to calculate the height.
 *
 * This function calculates the height of a binary tree, which is the number
 * of edges on the longest path from the root node to a leaf node.
 *
 * Return: If tree is NULL, return 0, else return the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree) /* If the current node exists (i.e., not NULL) */
	{
		/* Initialize variables to store heights of left and right subtrees */
		size_t left_height = 0, right_height = 0;

		/* Calculate height of left subtree */
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		/* Calculate height of right subtree */
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 1;

		/* Return the maximum height of left and right subtrees */
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0); /* If tree is NULL, return 0 */
}

