#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the node to create
 * @value: the value to put in the new node
 *
 * Return: a pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_one = malloc(sizeof(binary_tree_t));

	if (!new_node_one)
		return (NULL);

	new_node_one->n = value;
	new_node_one->left = NULL;
	new_node_one->right = NULL;
	new_node_one->parent = parent;
	return (new_node_one);
}
