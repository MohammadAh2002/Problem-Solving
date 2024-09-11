/*

	Write a function to compute the sum of just the positive numbers in an array
	of integers. First, solve the problem using iteration. Then, using the technique
	shown in this chapter, convert your iterative function to a recursive function.

*/

#include <iostream>

using namespace std;

int SumPositiveNumbers(int Arr[]) {

	int Sum = 0;

	for (int i = 0; i < 7; i++) {

		if (Arr[i] > 0)
			Sum += Arr[i];

	}

	return Sum;

}

int SumPositiveNumbersUsingRecursive(int Arr[], int Length) {

	if (Length == 0)
		return 0;

	if (Arr[Length - 1] < 0)
		return SumPositiveNumbersUsingRecursive(Arr, Length - 1);

	return Arr[Length - 1] + SumPositiveNumbersUsingRecursive(Arr, Length - 1);

}

int main()
{
   
	int Arr[] = {1,5,-2,10,4,3,9};

	cout << "Iterative Sum = " << SumPositiveNumbers(Arr) << endl;

	cout << "Recursive Sum = " << SumPositiveNumbersUsingRecursive(Arr, 7) << endl;

	return 0;
}
