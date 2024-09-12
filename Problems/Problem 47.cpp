/*

	Write a program to read a LoanAmount and Monthly Payment and calculate how many months you need to
	settle the loan.
	
	Input:
	5000
	500

	Outputs:
	10 Months

*/

#include <iostream>
using namespace std;

void read_loanandmonthlypayment(int& loan,int& monthly_payment) {


	cout << "how much is the loan: ";
	cin >> loan;

	cout << "how much is the monthly payment: "; 
	cin >> monthly_payment;
}

int calculate_loan_finsh_time(int loan, int monthly_payment) {

	return loan / monthly_payment;

}

void print_time_to_finsh_loan(int loan_time) {

	cout << "the time you need to finsh the payment is: " << loan_time << " moths" << endl;

}

int main()
{
   
	int loan, monthly_payment;

	read_loanandmonthlypayment(loan, monthly_payment);

	print_time_to_finsh_loan(calculate_loan_finsh_time(loan, monthly_payment));

}
