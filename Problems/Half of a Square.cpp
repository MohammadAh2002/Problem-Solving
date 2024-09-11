/*
	
	Write a Program That Draw Half of Square.

	****
	***
	**
	*

*/

#include <iostream>

using namespace std;

int main()
{
   
	int RowsNumber;

	cout << "Enter Number of Square Rows: ";
	cin >> RowsNumber;

	for (int Row = 1; Row <= RowsNumber; Row++) {

		for (int HashNumber = RowsNumber; HashNumber >= Row ; HashNumber--) {

			cout << "*";

		}

		cout << "\n";

	}

	return 0;

}
