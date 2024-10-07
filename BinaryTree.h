#pragma once

#include <iostream>

struct Node {
	int data;

	// parent
	Node* parent;

	// children
	Node* left; 
	Node* right;
};

class BinaryTree
{
private:

	// Private Variables
	Node* root;

	// Private Methods
	Node* CreateNode(int data, Node* parent=nullptr, Node* leftChild=nullptr, Node* rightChild=nullptr);

public:
	BinaryTree() {
		std::cout << "binary tree created" << std::endl;
		root = nullptr;
	}
	~BinaryTree() {
		delete root;
	}

	void insert(int data);
};

