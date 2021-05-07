#ifndef _BINARY_TREES_H_
#define _BINARY_TREES_H_

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>


/**
 * struct binary_tree_s - Binary node
 *
 * @n: Integer node
 * @parent: Pointer node
 * @left: Pointer node
 * @right: Pointer node
 */
typedef struct binary_tree_s
{
	int n;
	struct binary_tree_s *parent;
	struct binary_tree_s *left;
	struct binary_tree_s *right;
} binary_tree_t;

typedef struct binary_tree_s bst_t;
typedef struct binary_tree_s avl_t;
typedef struct binary_tree_s heap_t;

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);
void binary_tree_print(const binary_tree_t *);
heap_t *heap_insert(heap_t **root, int value);

#endif
