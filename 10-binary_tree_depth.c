#include "binary_trees.h"

/**
 *binary_tree_depth -  measures the depth of a node in a binary tree
 *
 *
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t deep = 0;

	if (tree == NULL)
		return 0;

	if (tree->parent)
		deep = (1 + binary_tree_depth(tree->parent));
	return (deep);

}
