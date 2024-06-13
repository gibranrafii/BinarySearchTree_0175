#include <iostream>
#include <string>
using namespace std;

class Node
{
public:
	string info;
	Node* leftchild;
	Node* rightchild;

	// Constructor for the node class
	Node(string i, Node* l, Node* r)
	{
		info = i;
		leftchild = l;
		rightchild = r;
	}
};

class BinaryTree
{
public:
	Node* ROOT;

	BinaryTree()
	{
		ROOT = nullptr; // initializing ROOT to null
	}

	void insert(string element) // Insert a node in the binary search tree
	{
		Node* newNode = new Node(element, nullptr, nullptr); // allocate memory for the new node
		newNode->info = element; // Assign value to the data field of the new node
		newNode->leftchild = nullptr; // Make the left childe of the new node point to NULL
		newNode->rightchild = nullptr; // Make the right child of the new node point to NULL

		Node* parent = nullptr; 
		Node* currentNode = nullptr; 
		search(element, parent, currentNode); // Locate the node which will be the parent of the node to be insert

		if (parent == nullptr) // If the parent is NULL (tree is empty)
		{
			ROOT = newNode; // Mark the new node as ROOT
			return; //exit
		}
	}

};

int main()
{
   
}