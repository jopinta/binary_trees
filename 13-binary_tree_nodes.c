#include "binary_trees.h"

/**
 *binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 *@tree: is a pointer to the root node of the tree to count the number of nodes
 *
 *Return: nodes or 0
 *
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{


	if (!tree)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		return (1 + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
	else

		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
