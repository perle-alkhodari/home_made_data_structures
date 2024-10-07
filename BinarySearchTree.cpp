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
        std::cout << root->data << " ";
        PrintInOrder(root->right);
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
            std::cout << temp->data << std::endl;
            // check data against temp
            if (data < temp->data) {
                std::cout << "went left" << std::endl;
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
    std::cout << "new data added" << std::endl;
}

void BinarySearchTree::PrintInOrder()
{
    PrintInOrder(root);
}
