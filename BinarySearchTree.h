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

public:
	// constructors
	BinarySearchTree() {
		std::cout << "binary tree created" << std::endl;
		root = nullptr;
	}

	// destructor
	~BinarySearchTree() {
		delete root;
	}

	// methods
	void insert(int data);
};

