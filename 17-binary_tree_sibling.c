#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int left_height = 0, right_height = 0;

    if (tree == NULL)
        return 0;

    if (tree->left == NULL && tree->right == NULL)
        return 1;

    if ((tree->left) && (tree->right))
    {
        left_height = binary_tree_height(tree->left);
        right_height = binary_tree_height(tree->right);

        if (left_height == right_height)
            return (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right));
    }

    return 0;
}