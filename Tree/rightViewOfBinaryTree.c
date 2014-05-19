/********************************************************************
 *    Print Right View of a Binary Tree
 *
 *    http://www.geeksforgeeks.org/print-right-view-binary-tree-2/
 *
 ********************************************************************/
#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

struct Node *newNode(int data) {
    struct Node *node = (struct Node*)malloc (sizeof(struct Node));
    node->data = data;
    node->left = NULL;
    node->right = NULL;

    return node;
}

// print right view of the tree
void printRightView ( struct Node* root) {

    if (root == NULL) {
        return;
    }

    printf("%d ", root->data);

    printRightView(root->right);
}

int main() {
    struct Node *root = newNode(1);
    root->left = newNode(2);
    root->right = newNode(3);
    root->left->left = newNode(4);
    root->left->right = newNode(5);
    root->right->left = newNode(6);
    root->right->right = newNode(7);
    root->right->left->right = newNode(8);

    printRightView(root);

    return 0;
}
