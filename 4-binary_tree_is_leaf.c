#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if binary tree node is leaf, meaning it has
 * does not have any child
 * @node: is a pointer to the node to check
 * Return: 1 if it is a leaf or 0 if it is not
 */
int binary_tree_is_leaf(const binary_tree_t *node);
{
	if (!node)
        return (0);

    return (!node->left && !node->right);
}
