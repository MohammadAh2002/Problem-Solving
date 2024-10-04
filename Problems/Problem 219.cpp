/*

	Write a program to read a number and print the text of that number.

	Please enter Number:
	546780834

	Result:
	Five Hundreds Forty Six Millions Seven Hundreds Eighty Thousands Eight Hundreds Thirty Four

*/

#include <iostream>
#include <string>

using namespace std;

int ReadNumber (string massege) {

	cout << massege;

	int num;

	cin >> num;

	return num;

}

string NumberToText (int num) {

	if (num == 0) {

		return "";
	}

	if (num >= 1 && num <= 19) {

		string arr[] = { "","one","two","three","four","five","six","saven","eight","nine","ten"
						"eleven","twelve","therten","fourten","sixteen","Seventeen","Eighteen","Nineteen"};

		return arr[num] + " ";
	}
	if (num >= 20 && num <= 99) {

		string arr[] = {"","","twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

		return arr[num /10] + " " + NumberToText(num %10);

	}

	if (num >= 100 && num <= 199) {

		return "one hundred " + NumberToText(num % 100);

	}
	if (num >= 200 && num <= 999) {

		return NumberToText(num / 100) + "Hundreds " + NumberToText(num % 100);

	}

	if (num >= 1000 && num <= 1999) {

		return "one thousend " + NumberToText(num % 1000);

	}
	if (num >= 2000 && num <= 999999) {

		return   NumberToText(num / 1000) + "thousend " + NumberToText(num % 1000);

	}

	if (num >= 1000000 && num <= 1999999) {

		return "one million " + NumberToText(num % 1000000);

	}
	if (num >= 2000000 && num <= 999999999) {

		return   NumberToText(num / 1000000) + "million " + NumberToText(num % 1000000);

	}

	if (num >= 1000000000 && num <= 1999999999) {

		return "one billion " + NumberToText(num % 1000000000);

	}
	else{

		return   NumberToText(num / 1000000000) + "billions " + NumberToText(num % 1000000000);

	}

	}
	

int main()
{
  
	int number = ReadNumber("enter a numbre: ");

	cout << NumberToText(number) << endl;

}
