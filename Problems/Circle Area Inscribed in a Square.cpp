/*

	Write a program to calculate Circle area inscribed in a square, then print it on the screen.
	- Area = (PI * a^2) / 4
	- PI = 3.14

	The user should enter:
	A
 
	Example Inputs:
	10

	Outputs:
	78.54

*/

#include <iostream>
using namespace std;

void read_a(int& a){

	cout << "what is a: ";
	cin >> a;

}

float calculate_area(int a) {

	float area = 3.14 * pow((a / 2), 2);

	return area;

}

void print_area(float area) {

	cout << "the rea is: " << area << endl;

}



int main()
{
   
	int a;

	read_a(a);
	print_area(calculate_area(a));


}
