#include "binary_trees.h"

/**
 * binary_tree_node- returns pointer to a new node or null 
 * @parent: binary_tree_t
 * @value: integer
 *
 * Return: pointer of new node on sucess
 *         Otherwise - null on failure
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
        binary_tree_t *new;
        new = malloc(sizeof(binary_tree_t));

        if (new == NULL)
                return (NULL);
        
        if (parent->left == NULL){
                new->n = value;
                new->parent = parent;
                new->right = NULL;
                new->left = NULL;
                return (new);
        }

        new->n = value;
        new->left = parent->left;
        parent->left->parent = new;
        parent->left = new;
        new->right = NULL;
        new->parent = parent;

        return (new);
}