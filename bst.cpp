#include "bst.h"
#include <stddef.h>  // For NULL
#include <stdlib.h>  // For malloc, free

#include "bst.h"
#include <stddef.h>  // For NULL
#include <stdlib.h>  // For malloc, free
#include <iostream>

void tree_insert(struct Node** T, int value) { // Value == key

	// Line 1 x = T.root
	Node *x = *T; // Node being compared with z
	Node *y = NULL; // y will be the parent of z
	Node *z = NULL; // A pointer to my new node

	while (x != NULL){

		// Ensure to exit if a duplicate is found
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

	

	return;
}

void free_tree(struct Node* T) {

	if (T != NULL){
		free_tree(T->left);
		free_tree(T->right);
		delete T;
	}

	return;
}

size_t size_of(const struct Node* T) {

	if (T == NULL)
		return 0;
	else
		return 1 + size_of(T->left) + size_of(T->right);

	return 0;
}

int* contents_of(const struct Node* T) {

	// Create an array to store the contents of the tree
	int *arr = new int[size_of(T)];

	return NULL;
}

const struct Node* second_min_in(const struct Node* T) {

	/* Returns a pointer to the node in the specified tree containing the second-
	smallest element in the tree. If the tree has zero or one elements, this
 	function returns NULL. */

	if (T == NULL || T->left == NULL)

	

	return NULL;
}


/** HELPER FUNCTIONS **/

void inorder_tree_walk(const struct Node *x){
	
	if ( x != NULL){
		inorder_tree_walk(x->left);
		std::cout << x->value << " ";
		inorder_tree_walk(x->right);
	}
	std::cout << std::endl;
	return;

}
		
const struct Node* tree_search(const struct Node* x, int k){

	if (x == NULL || k == x->value)
		return x;
	if (k < x->value)
		return tree_search(x->left,k);
	else
		return tree_search(x->right,k);

}

const struct Node* tree_minimum(const struct Node* x){

	while (x->left != NULL)
		x = x->left;
	return x;

}

const struct Node* tree_successor(const struct Node* x){

	if (x->right != NULL)
		return tree_minimum(x->right);
	else {
		Node *y = x->p;
		while (y != NULL && x == y->right){
			x = y;
			y = y->p;
		}
		return y;
	}

}
