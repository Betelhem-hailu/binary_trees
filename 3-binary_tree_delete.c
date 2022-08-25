#include "binary_trees.h"

/**
 * binary_tree_node- returns pointer to a new node or null 
 * @parent: binary_tree_t
 * @value: integer
 *
 * Return: pointer of new node on sucess
 *         Otherwise - null on failure
 */

void binary_tree_delete(binary_tree_t *tree);
{
    if (tree == NULL)
        return (NULL);
    
    tree->right =NULL;
    tree->left =NULL;
}