/*

	Write a program to ask the user to enter:
	• Grade
	
	Then print the grade as follows:
	• 90 –100 Print A
	• 80 –89   Print B
	• 70 –79   Print C
	• 60 –69   Print D
	• 50 –59   Print E
	• Otherwise Print F
	
	Example Inputs:
	95

	Outputs:
	A

*/

#include <iostream>
using namespace std;

int read_grade() {

	int grade;

	cout << "what is the grade?\n";
	cin >> grade;

	return grade;
}

char check_grade(int grade) {

	if (grade <= 100 && grade >= 90)
		return 'A';
	else if (grade <= 89 && grade >= 80)
		return 'B';
	else if (grade <= 79 && grade >= 70)
		return 'C';
	else if (grade <= 69 && grade >= 60)
		return 'D';
	else if (grade <= 59 && grade >= 50)
		return 'E';
	else if (grade <= 49 && grade >= 0)
		return 'F';
	else
		return 'x';
}

void print_mark(char mark) {

	cout << "your mark is: " << mark << endl;

}

int main()
{
  
	print_mark(check_grade(read_grade()));



}
