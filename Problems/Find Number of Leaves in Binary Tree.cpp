/*

	For a class that implements a binary tree, add a publicly accessible method that returns
	the number of leaves (nodes without children) in the tree.
	The counting of leaves should be performed using recursion.

*/

#include <iostream>

using namespace std;

struct Tree {

	int value;

	Tree* Right;
	Tree* Left;

};

int NumberOfLeaves(Tree* Head) {

	if (Head == NULL)
		return 0;

	if (Head->Right == NULL && Head->Left == NULL)
		return 1;

	int LeftCount = NumberOfLeaves(Head->Left);
	int RightCount = NumberOfLeaves(Head->Right);
	
	return LeftCount + RightCount;

}

int main()
{

	Tree* RootNode = new Tree;

	Tree* RootRight = new Tree;
	Tree* RootLeft = new Tree;

	//Right Subtree
	Tree* RightSubtreeRight = new Tree;
	Tree* RightSubTreeLeft = new Tree;

	//Left Subtree
	Tree* LeftSubtreeRight = new Tree;
	Tree* LeftSubTreeLeft = new Tree;

	// Root Node;
	RootNode->value = 17;
	RootNode->Right = RootRight;
	RootNode->Left = RootLeft;

	// Right Subtree
	RootRight->value = 144;
	RootRight->Right = RightSubtreeRight;
	RootRight->Left = RightSubTreeLeft;


	RightSubtreeRight->value = 217;
	RightSubtreeRight->Right = NULL;
	RightSubtreeRight->Left = NULL;

	RightSubTreeLeft->value = 99;
	RightSubTreeLeft->Right = NULL;
	RightSubTreeLeft->Left = NULL;

	// Left Subtree
	RootLeft->value = 4;
	RootLeft->Right = LeftSubtreeRight;
	RootLeft->Left = LeftSubTreeLeft;

	LeftSubtreeRight->value = 3;
	LeftSubtreeRight->Right = NULL;
	LeftSubtreeRight->Left = NULL;

	LeftSubTreeLeft->value = 16;
	LeftSubTreeLeft->Right = NULL;
	LeftSubTreeLeft->Left = NULL;

	cout << NumberOfLeaves(RootNode);


}
