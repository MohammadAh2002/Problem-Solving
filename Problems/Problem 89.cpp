/*

	Program to Print All Odd Numbers Between 1 and 100.

*/

#include <iostream>
using namespace std;


int main()
{
   

	for (int i = 1; i <= 100; i++) {

		if (i % 2 == 1)
			cout << i << " ";

	}

	return 0;

}
