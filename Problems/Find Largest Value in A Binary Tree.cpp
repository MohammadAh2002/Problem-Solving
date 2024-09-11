/*

	Write a function that, when given a binary tree where each node holds an integer,
	returns the largest integer in the tree.

*/

#include <iostream>

using namespace std;

struct Tree {

	int value;
	
	Tree* Right;
	Tree* Left;

};

int MaxValue(Tree* Head) {

	if (Head == NULL)
		return 0;

	if (Head->Right == NULL && Head->Left == NULL)
		return Head->value;

	int RightMax = MaxValue(Head->Right);
	int LeftMax = MaxValue(Head->Left);
	int MaxNum = Head->value;

	if (LeftMax > MaxNum)
		return LeftMax;

	if (RightMax > MaxNum)
		return RightMax;

}


int main()
{

	Tree* RootNode = new Tree;

	Tree* RootRight = new Tree;
	Tree* RootLeft =  new Tree;
			
	//Right Subtree
	Tree* RightSubtreeRight = new Tree;
	Tree* RightSubTreeLeft =  new Tree;
			
	//Left Subtree
	Tree* LeftSubtreeRight = new Tree;
	Tree* LeftSubTreeLeft =  new Tree;

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


	cout << MaxValue(RootNode);


}
