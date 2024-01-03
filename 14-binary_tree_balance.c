#include "binary_trees.h"

size_t binary_tree_height(const binary_tree_t *tree);

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height.
 * Return: If tree is NULL, your function must return 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t h_left = 0, h_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		h_left = 1 + binary_tree_height(tree->left);
	}
	else
		h_left = 0;

	if (tree->right)
	{
		h_right = 1 + binary_tree_height(tree->right);
	}
	else
		h_right = 0;

	if (h_left > h_right)
		return (h_left);
	else
		return (h_right);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 * Return: 0 if tree is null, otherwise balance factor.
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0, balance_factor;

	if (tree == NULL)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	balance_factor = l_height - r_height;

	return (balance_factor);
}
