#include "binary_trees.h"

/**
 *binary_tree_height - measures the height of a binary tree
 *@tree: is a pointer to the root node of the tree to measure the height
 *Return: size_t child
 */



size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t c_le = 0;
	size_t c_ri = 0;

	if (!tree)
		return (0);

	if ((tree->left))
		c_le = (1 + binary_tree_height(tree->left));

	if (tree->right)
		c_ri = (1 + binary_tree_height(tree->right));


	if (c_ri >= c_le)
		return (c_ri);
	return (c_le);
}


/**
 *binary_tree_balance - measures the balance factor of a binary tree
 *@tree: ptr to the root node of the tree to measure the balance factor
 *
 * Return: 0 or balance
 *the height of its right subtree minus the height of its left subtree
 */


int binary_tree_balance(const binary_tree_t *tree)
{
	int lefty = 0;
	int righty = 0;

	if (!tree)
		return (0);

	if (tree->left)
		lefty = 1 + binary_tree_height(tree->left);
	if (tree->right)
		righty = 1 + binary_tree_height(tree->right);

	return (lefty - righty);
}
