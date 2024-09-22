#include "bst.h"
#include <stddef.h>  // For NULL
#include <stdlib.h>  // For malloc, free

#include "bst.h"
#include <stddef.h>  // For NULL
#include <stdlib.h>  // For malloc, free
#include <iostream>

void tree_insert(struct Node** T, int value) { //value = key

	// Line 1 x = T.root
	Node *x = *T; // Node being compared with z
	Node *y = NULL; // y will be the parent of z
	Node *z = NULL; // a pointer ot my new node

	while (x != NULL){
		//ensure to exit if a duplicate is found
		if (x->value == value){
		std::cout << "The item to be inserted is already in the tree -- duplicates are not allowed" << endl;
		return;
	}
	y = x;
	if (value < x->value)
		x = x->left;
	else
		x = x->right;

	}

	// If we make it this far, then we don't have any duplicates
	// Create the node
	z = new Node;
	z->p = y;
	z->left = NULL;
	z->right = NULL;
	z->value = value;

	if (y == NULL)
		*T = z;
	else if (z->value < y->value)
		y->left = z;
	else
		y->right = z;


	//temporary
	inorder_tree_walk(*T);

	return;
}

void free_tree(struct Node* T) {
	/* TODO: Implement this function! */
	(void) T;
	return;
}

size_t size_of(const struct Node* T) {
	/* TODO: Implement this function! */
	(void) T;
	return 0;
}

int* contents_of(const struct Node* T) {
	/* TODO: Implement this function! */
	(void) T;
	return NULL;
}

const struct Node* second_min_in(const struct Node* T) {
	/* TODO: Implement this function! */
	(void) T;
	return NULL;
}


/** Optional **/

void inorder_tree_walk(const struct Node *x){
	if ( x != NULL){
		inorder_tree_walk(x->left);
		std::cout << x->value << " ";
		inorder_tree_walk(x->right);
	}
	std::cout << std::endl;
	return;
}
		
