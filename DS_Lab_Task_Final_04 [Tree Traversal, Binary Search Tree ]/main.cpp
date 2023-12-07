#include <iostream>

using namespace std;

struct Node {
    int data;
    Node* left;
    Node* right;


Node(int value){
    data = value;
    left = NULL;
    right = NULL;
 }
};


Node* insertBST(Node* root, int value) {
    if (root == NULL) {
        return new Node(value);
        }
      if (value < root->data) {
        root->left = insertBST(root->left, value);
        }
         else {
        root->right = insertBST(root->right, value);
    }
    return root;
}



void preOrder(Node* root) {
    if (root != NULL) {
        cout << root->data << " ";

        preOrder(root->left);
        preOrder(root->right);
    }
}


void inOrder(Node* root) {
    if (root != NULL) {

        inOrder(root->left);
        cout << root->data << " ";
        inOrder(root->right);
    }
}


void postOrder(Node* root) {
    if (root != NULL) {
        postOrder(root->left);
        postOrder(root->right);

        cout << root->data << " ";
    }
}


int main() {
    Node* root = NULL;

    root = insertBST(root, 5);
    insertBST(root, 3);
    insertBST(root, 7);
    insertBST(root, 2);
    insertBST(root, 4);
    insertBST(root, 6);
    insertBST(root, 8);

    cout << "Pre-order traversal: ";
    preOrder(root);
    cout << endl;

    cout << "In-order traversal: ";
    inOrder(root);
    cout << endl;

    cout << "Post-order traversal: ";
    postOrder(root);
    cout << endl;


    return 0;
}

