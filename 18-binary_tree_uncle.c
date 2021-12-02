#include "binary_trees.h"

/**
 *binary_tree_sibling - checks if a binary tree is full
 *@node: is a pointer to the node to find siblings
 *
 *Return: if is full or 0
 *
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{

	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);

	if (node->parent->right == node)
		return (node->parent->left);


	return (NULL);

}

/**
 *binary_tree_uncle - checks for the unclr of a node
 *@node: is a pointer to tree
 *
 *Return: uncle of a node or 0
 *
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	if (!node)
		return (NULL);

	if (node->parent)
		return (binary_tree_sibling(node->parent));

	return (NULL);

}
