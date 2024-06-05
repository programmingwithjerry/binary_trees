#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes.
 * @first: Pointer to the first node.
 * @second: Pointer to the second node.
 *
 * This function finds and returns the lowest common ancestor of
 * two given nodes
 * in a binary tree. If no common ancestor is found, it returns NULL.
 *
 * Return: If no common ancestors, return NULL, else return common ancestor.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
				const binary_tree_t *second)
{
	binary_tree_t *parent1, *parent2;

	if (!first || !second)
		return (NULL); /* If either node is NULL, no common ancestor */

	if (first == second)
		return ((binary_tree_t *)first); /* If nodes are the same, return any */

	parent1 = first->parent;
	parent2 = second->parent;

	/* If one node is a direct ancestor of the other */
	if (first == parent2 || !parent1 || (!parent1->parent && parent2))
		return (binary_trees_ancestor(first, parent2));
	else if (parent1 == second || !parent2 || (!parent2->parent && parent1))
		return (binary_trees_ancestor(parent1, second));
	/* Otherwise, recursively find the common ancestor from the parents */
	return (binary_trees_ancestor(parent1, parent2));
}

