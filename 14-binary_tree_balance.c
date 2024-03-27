#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"


int binary_tree_balance(const binary_tree_t *tree)
{
    if (tree == NULL)
        return 0;
    else
        return binary_tree_height(tree->left) - binary_tree_height(tree->right);
}