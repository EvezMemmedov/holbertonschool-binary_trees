#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right: right-child of another node
 * @parent: parent of tree
 * @value: value of tree
 *
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		new_node->right->parent = new_node;
	}
	else
	{
		new_node->right = NULL;
	}
	new_node->left = NULL;
	new_node->right = new_node;

	return (new_node);
}
