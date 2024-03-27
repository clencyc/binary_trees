#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: a pointer to the lowest common ancestor node of the two given nodes
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
    binary_tree_t *temp;

    if (first == NULL || second == NULL)
    {
        return (NULL);
    }
    if (first == second)
    {
        return ((binary_tree_t *)first);
    }
    if (first->parent == second)
    {
        return ((binary_tree_t *)second);
    }
    if (second->parent == first)
    {
        return ((binary_tree_t *)first);
    }
    if (first->parent == second->parent)
    {
        return ((binary_tree_t *)first->parent);
    }
    if (first->parent == NULL)
    {
        return (first->parent);
    }
    if (second->parent == NULL)
    {
        return (second->parent);
    }
    temp = binary_trees_ancestor(first->parent, second->parent);
    return (temp);
}