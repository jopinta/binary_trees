#include "binary_trees.h"

/**
 *void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
 *@tree: is a pointer to the root node of the tree to traverse
 *@func: is a pointer to a function to call for each node
 *
 */


void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{

  if (tree == NULL)
        return;

  binary_tree_inorder(tree->left, func);

  binary_tree_inorder(tree->right, func);

  func(tree->n);
}
