#include "BinaryTree.h"

Node* BinaryTree::CreateNode(int data, Node* parent, Node* leftChild, Node* rightChild)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->parent = parent;
    newNode->left = leftChild;
    newNode->right = rightChild;

    return newNode;
}

void BinaryTree::insert(int data)
{
    if (root == nullptr) {
        root = CreateNode(data);
    }
}
