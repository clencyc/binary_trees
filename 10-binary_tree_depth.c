#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary_trees.h"


size_t binary_tree_depth(const binary_tree_t *tree)
{
    size_t depth = 0;

    if (tree == NULL)
    {
        return (0);
    }
    if (tree->parent)
    {
        depth = 1 + binary_tree_depth(tree->parent);
    }
    return (depth);
}