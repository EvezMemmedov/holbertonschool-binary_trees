#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_nodes - node with least 1 child binary tree
 * @tree: pointer
 *
 * Return: count of child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_child = 0;
	size_t right_child = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_child = binary_tree_nodes(tree->left);
	right_child = binary_tree_nodes(tree->right);

	return (left_child + right_child + 1);
}
