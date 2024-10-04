/*

	Write a program to read a number and print the text of that number.

	Please enter Number:
	546780834

	Result:
	Five Hundreds Forty Six Millions Seven Hundreds Eighty Thousands Eight Hundreds Thirty Four

*/

#include <iostream>

using namespace std;

string NumberInWords(int num) {

	if (num == 0)
		return "";

	if (num >= 1 && num <= 19) {

		string NumsFrom1to19[20] = { "","one","two","three","four","five","six","seven","eight","nine","ten",
									"eleven","twilve","threten","fourten","fiveten","sixten","seventen",
									"eightten","nineten" };

		return NumsFrom1to19[num] + " ";
	}
	else if (num >= 20 && num <= 99) {

		string NumsFrom20To90[10] = { "", "","twinty","therty","fourty","fifty","sixty","seventy","eighty","ninty" };

		return  NumsFrom20To90[num / 10] + " " + NumberInWords(num % 10);

	}

	else if (num >= 100 && num <= 199)
		return "one hundred " + NumberInWords(num % 100);

	else if (num >= 200 && num <= 999)
		return NumberInWords(num / 100) + "hundreds " + NumberInWords(num % 100);

	else if (num >= 1000 && num <= 1999)
		return NumberInWords(num / 1000) + "thousend " + NumberInWords(num % 1000);

	else if (num >= 2000 && num <= 999999)
		return NumberInWords(num / 1000) + "thousends " + NumberInWords(num % 1000);

	else if (num >= 1000000 && num <= 1999999)
		return NumberInWords(num / 1000000) + "million " + NumberInWords(num % 1000000);

	else if (num >= 2000000 && num <= 999999999)
		return NumberInWords(num / 1000000) + "millions " + NumberInWords(num % 1000000);

	else if (num >= 1000000000 && num <= 1999999999)
		return NumberInWords(num / 1000000000) + "Billion " + NumberInWords(num % 1000000000);

	else
		return NumberInWords(num / 1000000000) + "Billions " + NumberInWords(num % 1000000000);

}

int main()
{

	int num;

	cout << "enter a number:";
	cin >> num;

	cout << NumberInWords(num) << endl;







	return 0;

}
