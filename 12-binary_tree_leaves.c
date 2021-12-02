#include "binary_trees.h"

/**
 * binary_tree_leaves -  counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: n° of leaves or 0
 *
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{

	if (tree == NULL)
		return (0);
	/** Check for leaf node */
	if (tree->left == NULL && tree->right == NULL)
		return (1);
	/** For internal nodes, the sum of leaf nodes in l and r sub-tree */
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
