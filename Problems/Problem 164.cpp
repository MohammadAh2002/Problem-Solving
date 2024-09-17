
/*

	Write a program to print Fibonacci Series of 10 Using Recursion.

	1   1   2   3   5   8   13   21   34   55

*/

#include <iostream>

using namespace std;

int fibnacci(int counter, int prev1, int prev2) {

	int fibnum = 0;

	if (counter == 0)
		return prev2;

	fibnum = prev1 + prev2;

	prev1 = prev2;
	prev2 = fibnum;

	cout << prev1 << " ";

	fibnacci(counter - 1, prev1, prev2);

}

int main()
{

	cout << "fibnacci number:\n";
	fibnacci(10, 0, 1);











	return 0;
}
