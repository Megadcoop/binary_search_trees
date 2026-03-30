#include <iostream>

// Define the structure for a single tree node
struct Node {
    int data;
    Node* left;
    Node* right;

    // Constructor
    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Class to manage the Binary Search Tree
class BST {
private:
    Node* root;

    // Recursive helper function for insertion
    Node* insertRecursive(Node* current, int val) {
        if (current == nullptr) {
            return new Node(val);
        }
        if (val < current->data) {
            current->left = insertRecursive(current->left, val);
        } else if (val > current->data) {
            current->right = insertRecursive(current->right, val);
        }
        return current;
    }

    // Recursive helper to print the tree
    void inorderRecursive(Node* current) {
        if (current != nullptr) {
            inorderRecursive(current->left);
            std::cout << current->data << " ";
            inorderRecursive(current->right);
        }
    }

public:
    // Constructor
    BST() {
        root = nullptr;
    }

    // Public insert function
    void insert(int val) {
        root = insertRecursive(root, val);
    }

    // Public function to trigger the print
    void printInorder() {
        inorderRecursive(root);
        std::cout << std::endl;
    }
};

int main() {
    BST tree;
    int arr[] = {1, 5, 9, 2, 4, 10, 6, 3, 8};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {
        tree.insert(arr[i]);
    }

    std::cout << "Tree contents (Inorder): ";
    tree.printInorder();

    return 0;
}