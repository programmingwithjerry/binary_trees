#include "binary_trees.h"

/**
 * binary_tree_postorder - Traverses a binary tree using post-order traversal.
 * @tree: Pointer to the root node of the tree to traverse.
 * @func: Pointer to a function to call for each node.
 *
 * Description: This function applies func to the value of each node
 *              in post-order (left, right, root).
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/*Check if both the tree and function pointers are valid */
	if (tree && func)
	{
		/*Recursively traverse the left subtree */
		binary_tree_postorder(tree->left, func);
		/*Recursively traverse the right subtree */
		binary_tree_postorder(tree->right, func);
		/*Apply the function to the current node's value */
		func(tree->n);
	}
}

