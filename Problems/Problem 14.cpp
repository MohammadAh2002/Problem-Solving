/*

	Write a function that is passed an array of integers and a “target” number
	and that returns the number of occurrences of the target in the array. Solve
	the problem first using iteration, then recursion.

*/

#include <iostream>

using namespace std;

int HitsNumberLoop(int Arr[], int Target) {

	int Hits = 0;

	for (int i = 0; i < 11; i++) {

		if (Arr[i] == Target)
			Hits++;

	}

	return Hits;

}

int HitsNumberRecursive(int Arr[], int Length, int Target) {

	if (Length == 0)
		return 0;

	if (Arr[Length - 1] == Target) {

		return 1 + HitsNumberRecursive(Arr,Length - 1, Target);
	}

	return HitsNumberRecursive(Arr, Length - 1, Target);

}
int main()
{
   
	int Arr[] = { 1,5,-2,10,4,3,9,5,7,5,10};

	cout << "Iterative Hits = " << HitsNumberLoop(Arr, 5) << endl;

	cout << "Recursive Hits = " << HitsNumberRecursive(Arr, 11, 5) << endl;

	return 0;
}
