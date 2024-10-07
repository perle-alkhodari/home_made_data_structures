#include <iostream>
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
	BT.PrintInOrder();
}