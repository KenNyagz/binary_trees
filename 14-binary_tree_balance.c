#include "binary_trees.h"

/**
*bin_tree_height - gets height of a subtree
*@tree: pointer to node whose tree is to be traversed
*Return: height of subtree
*/

int bin_tree_height(binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = bin_tree_height(tree->left);
	right_height = bin_tree_height(tree->right);

	return ((left_height > right_height ? left_height : right_height) + 1);
}

/**
*binary_tree_balance - measures the balance factor of a binary tree
*@tree: pointer to the root node of the tree to measure the balance factor
*Return: the difference in left and right heights of a tree
*/

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = bin_tree_height(tree->left);
	right_height = bin_tree_height(tree->right);

	return (left_height - right_height);
}
