#include "binary_trees.h"

unsigned char is_leaf(const binary_tree_t *node);
size_t depth(const binary_tree_t *tree);
const binary_tree_t *get_leaf(const binary_tree_t *tree);
int is_perfect_recursive(const binary_tree_t *tree,
                         size_t leaf_depth, size_t level);
int binary_tree_is_perfect(const binary_tree_t *tree);

/**
 * is_leaf - Checks if a node is a leaf in a binary tree.
 * @node: A pointer to the node to check.
 *
 * Returns 1 if the node is a leaf, otherwise returns 0.
 */
unsigned char is_leaf(const binary_tree_t *node)
{
	/* Check if the node has no children */
	return ((node->left == NULL && node->right == NULL) ? 1 : 0);
}

/**
 * depth - Determines the depth of a given node in a binary tree.
 * @tree: A pointer to the node to determine the depth of.
 *
 * Returns the depth of the node.
 */
size_t depth(const binary_tree_t *tree)
{
	/*
	 * If the node has a parent, recursively call depth to
	 * compute the depth
	 */
	return (tree->parent != NULL ? 1 + depth(tree->parent) : 0);
}

/**
 * get_leaf - Retrieves a leaf node from a binary tree.
 * @tree: A pointer to the root node of the tree to search
 * for a leaf in.
 * Returns a pointer to the first encountered leaf node.
 */
const binary_tree_t *get_leaf(const binary_tree_t *tree)
{
	/* If the current node is a leaf, return it */
	if (is_leaf(tree) == 1)
		return (tree);
	/* Recursively search for a leaf in the left subtree, if exists,
	 * otherwise in the right subtree
	 */
	return (tree->left ? get_leaf(tree->left) : get_leaf(tree->right));
}

/**
 * is_perfect_recursive - Determines recursively if a
 * binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 * @leaf_depth: The depth of one leaf in the binary tree.
 * @level: The level of the current node.
 *
 * Returns 1 if the tree is perfect, otherwise returns 0.
 */
int is_perfect_recursive(const binary_tree_t *tree,
                         size_t leaf_depth, size_t level)
{
	/*
	 * If the current node is a leaf, check if its level
	 * matches the depth of a leaf
	 */
	if (is_leaf(tree))
		return (level == leaf_depth ? 1 : 0);
	/* If a node has only one child, the tree is not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);
	/* Recursively check if both subtrees are perfect */
	return (is_perfect_recursive(tree->left, leaf_depth, level + 1) &&
	        is_perfect_recursive(tree->right, leaf_depth, level + 1));
}

/**
 * binary_tree_is_perfect - Determines if a binary tree is perfect.
 * @tree: A pointer to the root node of the tree to check.
 *
 * Returns 1 if the tree is perfect, 0 if the tree is NULL or not perfect.
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	/* If the tree is NULL, it's not perfect */
	if (tree == NULL)
		return (0);
	/* Check recursively if the tree is perfect */
	return (is_perfect_recursive(tree, depth(get_leaf(tree)), 0));
}

