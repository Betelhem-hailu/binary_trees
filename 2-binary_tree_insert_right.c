#include "binary_trees.h"

/**
 * binary_tree_node- returns pointer to a new node or null 
 * @parent: binary_tree_t
 * @value: integer
 *
 * Return: pointer of new node on sucess
 *         Otherwise - null on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new;
    new = (binary_tree_t*) malloc(sizeof(binary_tree_t));

    if(new == NULL)
            return (NULL);
    if(parent == NULL)
    {
        new->n = value;
        new->parent = parent;
        new->left = NULL;
        new->right = NULL;

        return (new);
    }

    if(parent != NULL)
    {
        new->n = value;
        new->right = parent->right;
        parent->right->parent = new;
        parent->right = new;
        new->parent = parent;
        new->left = NULL;
        return (new);
    }
}