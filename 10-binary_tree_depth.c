#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_depth - the depth of a node
 * @tree: pointer
 *
 * Return: depth of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		depth++;
	}
	return (depth);
}
