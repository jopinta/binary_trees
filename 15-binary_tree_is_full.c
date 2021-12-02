#include "binary_trees.h"

/**
 *binary_tree_is_full - checks if a binary tree is full
 *@tree: is a pointer to the root node of the tree to check
 *
 *Return: if is full or 0
 *
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	int lefty = 0;
	int righty = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	else if (tree->left && tree->right)
	{
		lefty = binary_tree_is_full(tree->left);
		righty = binary_tree_is_full(tree->right);
		return (lefty && righty);
	}
	return (0);

}
