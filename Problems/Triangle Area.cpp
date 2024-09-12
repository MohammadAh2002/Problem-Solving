/*

	Write a program to calculate triangle area then print it on the screen.
	- Area: 0.5 * a * h

	The user should enter:
	a
	h
	
	Example Inputs:
	10
	8

	Outputs:
	40

*/

#include <iostream>
using namespace std;

void read(int &a, int &h) {

	cout << "what is a: ";
	cin >> a;

	cout << "what is h: ";
	cin >> h;


}
float calculate_triangle_area(int a, int h) {

	return .5 * a * h;
}
void print_trin_area(float area) {

	cout << "tringle area is: " << area << endl;
}



int main()
{
   
	int a, h;

	read(a,h);

	print_trin_area(calculate_triangle_area(a, h));


}
