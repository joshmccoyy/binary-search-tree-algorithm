#ifndef BST_Included
#define BST_Included
#include <iostream>
#include <stddef.h> // For size_t
using namespace std;

/* Type: struct Node
 *
 * A type representing a node in a binary search tree.
 * The keys are integers.
 */
struct Node {
  int value;
  struct Node* p;
  struct Node* left;
  struct Node* right;
};

/**
 * Function: tree_insert
 * pg. 321
 * Inserts a new value into the binary search tree whose root pointer is pointed
 * at by root. The behavior of this function is unspecified in the case
 * where memory for a new node can't be allocated or if root is NULL.
 * 
 * This function does not make any attempt to balance the tree. It simply inserts
 * the element in to the BST following the standard insertion algorithm. This may
 * lead to significantly imbalanced trees.
 *
 * If the specified value already exists in the given BST, this function has no
 * effect and does not change the underlying BST.
 *
 * @param T  The root of the tree, which may be updated.
 * @param z The value to insert.
 */
void tree_insert(struct Node** T, int z);

/**
 * Deallocates all memory associated with the indicated binary search tree.
 *
 * @param T The root of the tree to free.
 */
void free_tree(struct Node* T);

/**
 * Returns the number of elements in the binary search tree pointed at by root.
 *
 * @param T The root of the tree in question.
 * @return The number of elements in that tree.
 */
size_t size_of(const struct Node* T);

/**
 * Returns a dynamically-allocated array containing the contents of the tree
 * in sorted order. The behavior of this function is unspecified in the case
 * where the appropriate memory can't be obtained.
 *
 * @param T A pointer to the root of the tree.
 * @return An array of the tree's elements, in sorted order.
 */
int* contents_of(const struct Node* T);

/**
 * Returns a pointer to the node in the specified tree containing the second-
 * smallest element in the tree. If the tree has zero or one elements, this
 * function returns NULL.
 *
 * @param T The root of the tree in question.
 * @return A pointer to the node holding the second-smallest element in the
 *         tree, or NULL if such a node doesn't exist.
 */
const struct Node* second_min_in(const struct Node* T);

//Optional Helper Functions

/**
 * Function: inorder_tree_walk
 * pg. 314
 * Prints out all the keys in a binary search tree in sorted order.
 * Prints the key of the root of a subtree between printing the values
 * in its left subtree and printing those in its right subtree.
 *
 * @param x The root of the tree to print
 */
void inorder_tree_walk(const struct Node* x);

/**
 * Funtion: tree_search
 * pg. 316
 * Searches for a node with a given key in a binary search tree.
 * Given a pointer to the root of the tree and a key k, TREE-SEARCH
 * returns a pointer to a node with key k if one exists; otherwise,
 * it returns NIL.
 *
 * @param x The root of the tree to search
 * @param k The value to search
 * @return A pointer to a node with key k if one exists, otherwise,
 * it returns NIL.
 */
const struct Node* tree_search(const struct Node* x, int k);

/**
 * Function: tree_minimum
 * pg. 318
 * The following procedure returns a pointer to the minimum element in
 * the subtree rooted at a given node x, which we assume to be non-NIL:
 *
 * @param x The root of the tree to search for the minimum
 * @return A point to the minimum node in the tree,
 */
const struct Node* tree_minimum(const struct Node* x);

/**
 * Function: tree_successor
 * pg. 319
 */
const struct Node* tree_successor(const struct Node* x);

// Basically an inorder_tree_walk but instead of printing the values, we store them in an array
void fill_array(const struct Node* T, int* contents, size_t& i);

#endif
