# Binary Search Tree Assignment

## Task 1:
Inserting the sequence `[1, 5, 9, 2, 4, 10, 6, 3, 8]` into an empty BST:

```text
      1
       \
        5
       / \
      2   9
       \  / \
        4 6  10
       /   \
      3     8
```
## Task 2: 
If a well-balanced binary search tree contains 1,000 values, what is the maximum number of steps it would take to search for a value within it?
```text
In a well-balanced BST the search time complexity is O(log n). log_2(1000)=approx 9.96 so the max number of
steps it would take would be 10.
```
## Task 3: 
Write an algorithm that finds the greatest value within a binary search tree.
```text
1. Check if the tree is empty (root is null). If so, return an error or null.
2. Start a pointer at the root node.
3. Update the pointer to the right child during each iteration.
4. Update the pointer to the right child during each iteration.
5. When the loop terminates (the node has no right child), return the value of this current node.
```
## Task 4: 
binary_search_trees.cpp
