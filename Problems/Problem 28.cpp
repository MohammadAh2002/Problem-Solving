/*

	Write a program to Sum odd numbers from 1 to N.
	
	Input:
	10

	Outputs:
	25

*/

#include <iostream>
using namespace std;

enum numbertype{odd=1,even=2};

void read_number(int& num) {

	cout << "what is the number?\n";
	cin >> num;
}
numbertype checkoddoreven(int num) {

	if (num % 2 == 0)
		return numbertype::even;
	else
		return numbertype::odd;


}
int add_the_odd_nums_ForLoop(int num) {

	int sum = 0;

	for (int i = 1; i <= num; i++) {

		if (checkoddoreven(i) == odd)
			sum += i;
	}
	return sum;
}
int add_the_odd_nums_WhileLoop(int num){

	int sum = 0, i = 1;

	while (i <= num) {

		if (checkoddoreven(i) == odd)
			sum += i;
		i++;
	}

	return sum;
}
int add_the_odd_nums_DoWhileLoop(int num) {

	int sum = 0, i = 1;

	do{
	
		if (checkoddoreven(i) == odd)
			sum += i;

		i++;
	
	} while (i <= num);

	return sum;
}
void print_sum_oddV(int number) {

	cout << "the sum of the odds values is: " << number << endl;

}


int main()
{
   
	int num;

	read_number(num);
	print_sum_oddV(add_the_odd_nums_ForLoop(num));
	print_sum_oddV(add_the_odd_nums_WhileLoop(num));
	print_sum_oddV(add_the_odd_nums_DoWhileLoop(num));
}
