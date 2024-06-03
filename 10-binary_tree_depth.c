#include "binary_trees.h"

/**
 * binary_tree_depth - Calculates the depth of a node within a binary tree.
 * @tree: Pointer to the node for which the depth is to be determined.
 *
 * Return: If tree is NULL, the function returns 0; otherwise,
 * it returns the depth.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}

