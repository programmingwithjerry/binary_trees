#include "binary_trees.h"

/**
 * binary_tree_inorder - Traverses a binary tree using in-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Description: This function calls func on the value of each node
 *              in the tree in in-order (left, root, right).
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if both the tree and function pointers are valid */
	if (tree && func)
	{
		/*Recursively traverse the left subtree*/
		binary_tree_inorder(tree->left, func);
		/*Apply the function to the current node's value*/
		func(tree->n);
		/*Recursively traverse the right subtree*/
		binary_tree_inorder(tree->right, func);
	}
}

