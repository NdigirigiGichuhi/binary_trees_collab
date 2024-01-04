#include "binary_trees.h"

/* Function to calculate the height of the tree */
int calculate_tree_height(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

    if (tree == NULL)
	{
        return 0;
    }
	else
	{
        left_height = calculate_tree_height(tree->left);
        right_height = calculate_tree_height(tree->right);

        if (left_height > right_height)
		{
            return left_height + 1;
        }
		else
		{
            return right_height + 1;
        }
    }
}

/* Function to check if the tree is perfect */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0;

    if (tree == NULL) {
        return 0;
    }

    left_height = calculate_tree_height(tree->left);
    right_height = calculate_tree_height(tree->right);

    if (left_height == right_height)
	{
        return 1;
    } 
	else 
	{
        return 0;
    }
}
