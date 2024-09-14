/*

	Write a Program to Calculate the Volume of a Cuboid (Rectangular Box).
    
    This program asks the user to input the height, width, and depth of a cuboid,
    then calculates and prints its volume
	
	Note: formula: Volume = height * width * depth.

*/

#include <iostream>
using namespace std;

int read_number(string massege) {

	int number;

	cout << massege;
	cin >> number;

	return number;
}

float cube_size(int tall, int width, int h) {

	return (float)tall * width * h;

}


int main()
{
   
	int tall = read_number("what is the tall: ");
	int width = read_number("what is the width: ");
	int h = read_number("what is the h: ");


	cout << "the size of the cube is: " << cube_size(tall, width, h) << endl;
}
