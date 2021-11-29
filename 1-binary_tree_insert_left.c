#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *@parent: pointer to the node to insert the left-child in
 *@value: value to store in the new node
 * Return: Always 0 (Success)
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *temp;

	if (parent == 0)
		return (NULL);
	temp = malloc(sizeof(binary_tree_t));
	if (!temp)
		return (NULL);

	temp->left = temp->right = NULL;
	temp->n = value;
	temp->parent = parent;

	if (parent->left)
	{
		parent->left->parent = temp;
		temp->left = parent->left;
	}
	parent->left = temp;

	return (temp);
}
