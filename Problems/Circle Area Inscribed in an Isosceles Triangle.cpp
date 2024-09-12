/*

	Write a program to calculate circle area Inscribed in an Isosceles Triangle,
	then print it on the screen.
	- Area = PI * (b^2 / 4) * ((2 * a - b) / (2 * a + b))
	- PI = 3.14

	The user should enter:
	a
	b
	
	Example Inputs:
	20
	10

	Outputs:
	47.124

*/

#include <iostream>
using namespace std;

void read_a_b(float& a, float& b) {

	cout << "what is a: ";
	cin >> a;

	cout << "what is b: ";
	cin >> b;
}

float calculat_area(float a, float b){

	const float PI = 3.14;

	float area = (PI) * (pow(b, 2) / 4) * ((2 * a - b) / (2 * a + b));

	return area;
}

void print_area(float area) {

	cout << "area is: " << area << endl;

}


int main()
{
   
	float a, b;

	read_a_b(a,b);
	
	print_area(calculat_area(a, b));

}
