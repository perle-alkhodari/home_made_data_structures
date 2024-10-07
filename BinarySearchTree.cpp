#include "BinarySearchTree.h"


// private methods
Node* BinarySearchTree::CreateNode(int data, Node* parent, Node* leftChild, Node* rightChild)
{
    Node* newNode = new Node();
    newNode->data = data;
    newNode->parent = parent;
    newNode->left = leftChild;
    newNode->right = rightChild;

    return newNode;
}

void BinarySearchTree::PrintInOrder(Node* root)
{
    if (root != nullptr) {
        PrintInOrder(root->left);
        std::cout << root->data << " " << std::endl;
        PrintInOrder(root->right);
    }
}

Node* BinarySearchTree::GetNode(Node* root, int data)
{
    // if null or if found
    if (root == nullptr || data == root->data) {
        // either data is found, or data doesn't exist, or tree is empty.
        return root;
    }
    if (data < root->data) {
        return GetNode(root->left, data);
    }
    else {
        return GetNode(root->right, data);
    }
}


// public methods
void BinarySearchTree::insert(int data)
{
    // if tree is empty
    if (root == nullptr) {
        root = CreateNode(data);
    }
    // otherwise
    else {
        // temporary nodes
        Node* temp = root;
        Node* newNode = nullptr;

        // while the new node has not been assigned yet
        while (newNode == nullptr) {
            // check data against temp
            if (data < temp->data) {
                // if data is less than temp's data AND temp has no left child,
                // then a new node may be created as the left child
                if (temp->left == nullptr) {
                    newNode = CreateNode(data, temp);
                    temp->left = newNode;
                    break;
                }

                // otherwise let temp become its left child
                temp = temp->left;
            }

            // same thing
            else if (data > temp->data) {
                if (temp->right == nullptr) {
                    newNode = CreateNode(data, temp);
                    temp->right = newNode;
                    break;
                }
                temp = temp->right;
            }
        }
    }
}

void BinarySearchTree::PrintInOrder()
{
    PrintInOrder(root);
}

Node* BinarySearchTree::GetNode(int data)
{
    return GetNode(root, data);
}

Node* BinarySearchTree::GetMinimum()
{
    Node* tmp = root;
    while (tmp->left != nullptr) {
        tmp = tmp->left;
    }
    return tmp;
}

Node* BinarySearchTree::GetMaximum()
{
    Node* tmp = root;
    while (tmp->right != nullptr) {
        tmp = tmp->right;
    }
    return tmp;
}
