#include <string>
#include "BinarySearchTree.h"

// PERLE & AARON to do:

// branch off of main
// choose a data structure
// create classes for this struct and start working on them
// as a bonus, we may feel free to add helpful methods in the helpers namespace :D

int main() {
	_CrtSetDbgFlag(_CRTDBG_ALLOC_MEM_DF | _CRTDBG_LEAK_CHECK_DF);
	_CrtSetBreakAlloc(-1);
	_CrtDumpMemoryLeaks();

	std::cout << "welcome to homemade data structs" << std::endl;

	// testing my tree
	BinarySearchTree BT;
	BT.insert(4);
	BT.insert(5);
	BT.insert(-2);
	BT.insert(-1);
	BT.insert(8);
	BT.PrintInOrder();
	Node* q = BT.GetNode(5);
	std::cout << "the node we searched for is " << q->data << std::endl;
	std::string parent = (q->parent == nullptr) ? "null" : std::to_string(q->parent->data);
	std::cout << "the parent of this node is " << parent << std::endl;
	std::string left = (q->left == nullptr) ? "null" : std::to_string(q->left->data);
	std::cout << "the left child is " << left << std::endl;
	std::string right = (q->right == nullptr) ? "null" : std::to_string(q->right->data);
	std::cout << "the right child is " << right << std::endl;
	Node* min = BT.GetMinimum();
	std::cout << "the minimum should be -2: " << min->data << std::endl;
	std::cout << "it's parent is 4: " << min->parent->data << std::endl;
	Node* max = BT.GetMaximum();
	std::cout << "the max should be 8: " << max->data << std::endl;
	std::cout << "the parent should be 5: " << max->parent->data << std::endl;
}