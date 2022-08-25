#include "binary_trees.h"

/**
 * binary_tree_height: traverses in preorder
 * @tree:is pointer to root node
 *
 * return: height of the tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
    if (tree == NULL)
        return (0);

    int height;
    while (tree->left != NULL)
    {
        tree->left = tree->left->left;
        height++;
    }

    return (height);
}