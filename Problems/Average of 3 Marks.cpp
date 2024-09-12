/*

	Write a program to ask the user to enter:
	• Mark1, Mark2, Mark3
	Then Print the Average of entered Marks
	
	Example Inputs:
	90
	80
	70
	
	Outputs:
	80

*/

#include <iostream>
using namespace std;

void read_3_nums(int nums_3[3]) {

	for (int i = 0; i < 3;i++) {

		cout << "what is number [" << i + 1 << "]: ";
		cin >> nums_3[i];
	}
}
float clculate_avg(int nums_3[3]) {

	float avg=0;
	int i = 0;
	for (i; i < 3; i++) {

		avg += nums_3[i];

	}

	return avg/i;
}
void print_avg(float avg){

	cout << "the avrege is:" << avg << endl;

}



int main()
{
   
	int nums_3[3];

	read_3_nums(nums_3);
	print_avg(clculate_avg(nums_3));
}
