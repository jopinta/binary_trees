#include "binary_trees.h"

/**
 *binary_tree_preorder -  goes through a binary tree using pre-order traversal
 *@tree: ptr to the root node of the tree to traverse
 *@func: ptr to a function to call for each node
 *
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
		/** if the current node is empty*/
	if (!tree || !func)
		return;
	func(tree->n);
	/** Traverse the left subtree*/
	binary_tree_preorder(tree->left, (*func));

    /** Traverse the right subtree*/
	binary_tree_preorder(tree->right, (*func));

}
