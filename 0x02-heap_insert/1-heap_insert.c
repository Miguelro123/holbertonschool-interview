#include "binary_trees.h"

/**
 * heap_insert - inserts a value into a Max Binary Heap
 * @root: double pointer to the root node of the Heap
 * @value: value store in the node to be inserted
 *
 * Return: a pointer to the new node, or NULL on failure
 */
heap_t *heap_insert(heap_t **root, int value)
{
	heap_t *NewNode;
	heap_t *parent;

	parent = find_parent(*root);
	NewNode = binary_tree_node(parent, value);
	if (NewNode == NULL)
		return (NULL);
	if (parent == NULL)
		*root = NewNode;
	else if (!(parent->left))
		parent->left = NewNode;
	else
		parent->right = NewNode;
	sort_nodes(&NewNode);
	return (NewNode);
}
