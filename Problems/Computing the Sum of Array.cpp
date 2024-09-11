/*

	Write a recursive function that is given an array of integers and the size of the array
	as parameters. The function returns the sum of the integers in the array.

	Note: start with an iterative solution to this problem.

*/

#include <iostream>

using namespace std;

int UsingLoop(int Array[], int Length) {

	int Sum = 0;

	for (int i = 0; i < Length; i++)
	{

		Sum += Array[i];

	}

	return Sum;

}

int UsingRecursion(int Array[], int Length) {

	if (Length == 0)
		return 0;

	int Sum = Array[Length - 1];

	 return Sum + UsingRecursion(Array, Length - 1);
	
}

int main()
{

	int Array[7] {5,4,10,15,9,8,7};

	cout << UsingLoop(Array,7) << "\n\n";

	cout << UsingRecursion(Array, 7);

	return 0;
}
