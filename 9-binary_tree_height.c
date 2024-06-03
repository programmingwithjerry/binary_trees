#include "binary_trees.h"

/**
 * binary_tree_height - Calculates the height of a binary tree.
 * @tree: Pointer to the root node of the tree to calculate the height.
 *
 * Return: If tree is NULL, the function returns 0; otherwise,
 * it returns the height.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)  /*Check if the tree node is not NULL*/
	{
		size_t left_height = 0, right_height = 0;

		/* Recursively calculate the height of the left subtree*/
		left_height = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		/* Recursively calculate the height of the right subtree*/
		right_height = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		/* Return the greater height of the two subtrees*/
		return ((left_height > right_height) ? left_height : right_height);
	}
	return (0);  /*Return 0 if the tree is NULL*/
}

