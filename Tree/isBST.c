/********************************************
 *   Check if a tree is BST
 ********************************************/

#include<stdio.h>
#include<stdlib.h>

struct Node {
    int data;
    struct Node *left, *right;
};

bool isBST (struct Node * treeRoot, int minimum, int maximum) {

    if (treeRoot == NULL) {
        return true;
    }

    if( treeRoot->data < minimum ||
        treeRoot->data > maximum ) {
            return false;
    }

    return isBST(treeRoot->left, minimum, treeRoot->data - 1 ) && isBST(treeRoot->right, treeRoot->data + 1, maximum);
}

int main () {

    if (isBST(root, INT_MIN, INT_MAX)) {
        printf("Is a BST");
    } else {
        printf("Not a BST");
    }
    return 0;
}
