#pragma once

#include <iostream>

// BST node
struct Node {
	int data;

	// parent
	Node* parent;

	// children
	Node* left; 
	Node* right;
};

class BinarySearchTree
{
private:

	// Private Variables
	Node* root;

	// Private Methods
	Node* CreateNode(int data, Node* parent=nullptr, Node* leftChild=nullptr, Node* rightChild=nullptr);
	void PrintInOrder(Node* root);
	Node* GetNode(Node* root, int data);

public:
	// constructors
	BinarySearchTree() {
		root = nullptr;
	}

	// destructor
	~BinarySearchTree() {
		// In order traversal to delete all the nodes
	}

	// methods
	void insert(int data);
	void PrintInOrder();
	Node* GetNode(int data);
};

