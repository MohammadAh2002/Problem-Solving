/*

	Write a program to print all words from AAA to ZZZ

	Output:
	AAA
	AAB
	AAC
	.
	.
	.
	ZZZ

*/

#include <iostream>
using namespace std;

void print_AAA_to_ZZZ() {

	for (int i = 65; i <= 90; i++) {

		for (int j = 65; j <= 90; j++) {

			for (int n = 65; n <= 90; n++) {

				cout << char(i) << char(j) << char(n) << endl;

			}
		}
	}
}

int main()
{
   
	print_AAA_to_ZZZ();

	return 0;

}
