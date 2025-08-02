#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: pointer
 *
 * Return: balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_side = 0;
	int right_side = 0;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_side = binary_tree_balance(tree->left);
	right_side = binary_tree_balance(tree->right);

	return (left_side - right_side);
}
