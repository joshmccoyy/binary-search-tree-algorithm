# binary-search-tree-algorithm
A working binary search tree algorithm for reference. Created for CS1D data structures homework assignment.

Special thank you to Keith Swartz for providing the C version of
this project. I have ported this problem to the C++ language.

The provided starter code in main.cpp is a test driver that will automatically
run your implementation against all the tests in the tests/ directory.

The actual test cases are given in the following format

    number of elements in tree
    element1 element2 ... elementN
    
We will then form a binary search tree of those elements by repeatedly
calling your insertion function on those elements, in order, starting
with an empty tree. For example, the test case

    5
    1 5 3 2 4
    
corresponds to this BST:

    1
     \
      5
     /
    3
   / \
  2   4
    
Although I have provided some simple test cases with these starter files,
those tests aren't exhaustive. I strongly recommend adding your own test
cases to check for conditions I didn't include.
