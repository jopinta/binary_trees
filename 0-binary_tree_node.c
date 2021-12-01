#include "binary_trees.h"


/**
* binary_tree_node - creates a binary tree node
* @parent:pointer to the parent node of the node to create
* @value:value to put in the new node
*
* Return: a pointer to the new node, or NULL on failure
*/


binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
/**alocate memory for new node */
	binary_tree_t *temp = NULL;
	temp = malloc(sizeof(binary_tree_t));

	if (!temp)
		return (NULL);

/**Initialize left and right children as NULL*/
	temp->left = temp->right = NULL;
	temp->n = value;
	temp->parent = parent;

	/**assign data to this node*/
	return (temp);
}
