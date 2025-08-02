#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure
 *
 * Return: balance factor (left subtree height - right subtree height)
 *         or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		left_height = (int)binary_tree_height(tree->left) + 1;

	if (tree->right)
		right_height = (int)binary_tree_height(tree->right) + 1;

	return (left_height - right_height);
}
