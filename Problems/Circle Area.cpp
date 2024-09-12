/*

	Write a program to calculate circle area then print it on the screen.
	- Area = PI * r^2
	- PI = 3.14

	The user should enter:
	r
 
	Example Inputs:
	5
 
	Outputs:
	78.54

 */

#include <iostream>

using namespace std;

void read_r(int &r) {

	cout << "what is r: ";
	cin >> r;


}
float calculate_circle_area(int r) {

	return 3.14 * pow(r,2);
}
void print_circle_area(float arae) {

	cout << "circle area is: " << arae << endl;

}


int main()
{
   
	int r;
	read_r(r);

	print_circle_area(calculate_circle_area(r));

}
