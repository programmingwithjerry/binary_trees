#include "binary_trees.h"

/**
 * is_full_recursive - Determines if a binary tree is full through recursion.
 * @tree: A pointer to the root node of the tree to examine.
 *
 * This function recursively checks if a binary tree is full, meaning that
 * each node in the tree has either zero or two children (i.e.,
 * it is a complete
 * binary tree). If the tree is not full, it returns 0; otherwise,
 * it returns 1.
 *
 * Return: If tree is not full, 0.
 *         Otherwise, 1.
 */
int is_full_recursive(const binary_tree_t *tree)
{
	if (tree != NULL) /* If the current node exists (i.e., not NULL) */
	{
		/*
		 * Check if current node has exactly one child or
		 *if any subtree is not full
		 */
		if ((tree->left != NULL && tree->right == NULL) ||
		    (tree->left == NULL && tree->right != NULL) ||
		    is_full_recursive(tree->left) == 0 ||
		    is_full_recursive(tree->right) == 0)
			return (0); /* If any condition is met, tree is not full */
	}
	return (1); /* If tree is NULL or full, return 1 */
}

/**
 * binary_tree_is_full - Checks if a binary tree is full.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Return: If tree is NULL or is not full - 0.
 *         Otherwise - 1.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL) /* If the tree is empty */
		return (0); /* It's not full */
	/* Otherwise, call the recursive function to check */
	return (is_full_recursive(tree));
}

