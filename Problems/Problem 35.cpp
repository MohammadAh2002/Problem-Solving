/*

	Write a program to ask the user to enter:
	• Mark1, Mark2, Mark3
	Then Print the Average of entered Marks, and print “PASS” if average>=50, otherwise print “FAIL”
 
	Example Inputs:
	90
	80
	70
	
	Outputs:
	80
	PASS

*/

#include <iostream>
using namespace std;

void read_mark(int &mark) {

	cout << "what is your mark?\n";
	cin >> mark;

}
string check_status(int mark) {

	if (mark < 55 && mark >=0)
		return "you faild";
	else if (mark >= 55 && mark < 60)
		return "accpted";
	else if (mark >= 60 && mark < 70)
		return "on the edge";
	else if (mark >= 70 && mark < 80)
		return "you can do better";
	else if (mark >= 80 && mark < 90 )
		return "good";
	else if (mark >= 90 && mark <=100 )
		return "perfect";
	else
		return "this mark is not in range";
}
void print_status(string markstatus) {

	if (markstatus == "this mark is not in range")
		cout << "this mark is not in range";
	else
	    cout << "you are: " << markstatus;

}


int main()
{
   
	int mark;

	read_mark(mark);
	print_status (check_status(mark));



}
