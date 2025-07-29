#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert - that inserts a node as the left-child of another node
 * @parent: parent of tree
 * @value: value of tree
 *
 * Return: new_node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		new_node->left->parent = new_node;
	}
	else
	{
		new_node->left = NULL;
	}
	new_node->right = NULL;
	parent->left = new_node;

	return (new_node);
}
