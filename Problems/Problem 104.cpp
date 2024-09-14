/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy only prime numbers to another array using AddArrayElement, and print it.

    Input:
    10

    Output:

    Array 1 elements:
    61 100 32 75 81 95 50 98 13 70

    Array 2 Prime numbers:
    61 13

    ----------------------
    the Function:

    void add_array_elemnts(int number, int arr[], int& arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

    }

*/

#include <iostream>
#include <cstdlib>

using namespace std;

enum enuprime { prime = 1, notprime = 2 };

enuprime check_prime_number(int number) {

    int m = round(number / 2);


    for (int counter = 2; counter <= m; counter++) {

        if (number % counter == 0)
            return enuprime::notprime;

    }

    return enuprime::prime;

}

int RandomNumber(int From, int To) {

	int randNum = rand() % (To - From + 1) + From;
	return randNum;

}

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void give_random_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = RandomNumber(1, 100);
    }
}

void add_array_elemnts(int number, int arr[], int& arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

}

void copy_prime_array_elemnts(int arr1[], int arr2[], int arr1lenth, int& arr2lenth) {

    for (int i = 0; i < arr1lenth; i++) {

        if(check_prime_number(arr1[i]) == enuprime::prime)
        add_array_elemnts(arr1[i], arr2, arr2lenth);

    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr1lenth = read_number("enter array 1 lenth: ");
    int arr1[100];
    give_random_array_elemnts(arr1, arr1lenth);

    int arr2[100], arr2lenth = 0;

    copy_prime_array_elemnts(arr1, arr2, arr1lenth, arr2lenth);

    cout << "array 1 is: ";
    print_aray(arr1, arr1lenth);

    cout << "array 2 is: ";
    print_aray(arr2, arr2lenth);


}

