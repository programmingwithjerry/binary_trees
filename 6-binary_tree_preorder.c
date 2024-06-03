#include "binary_trees.h"

/**
 * binary_tree_preorder - Traverses a binary tree using pre-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 * Description: This function calls func on the value of each node
 *              in the tree in pre-order (root, left, right).
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if both the tree and function pointers are valid */
	if (tree && func)
	{
		/*Apply the function to the current node's value */
		func(tree->n);
		/*Recursively traverse the left subtree */
		binary_tree_preorder(tree->left, func);
		/*Recursively traverse the right subtree*/
		binary_tree_preorder(tree->right, func);
	}
}

