/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    copy only prime numbers to another array and print it.

    Input:
    10

    Output:

    Array 1 elements:
    42 68 35 1 70 25 79 59 63 65

    Prime Numbers in Array2:
    1 79

*/

#include <iostream>
#include <cstdlib>

using namespace std;

enum enuprime { prime = 1, notprime = 2 };

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

int RandomNumber(int From, int To) {

    int randNum = rand() % (To - From + 1) + From;
    return randNum;

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

enuprime check_prime_number(int number) {

    int m = round(number / 2);


    for (int counter = 2; counter <= m; counter++) {

        if (number % counter == 0)
            return enuprime::notprime;

    }

    return enuprime::prime;

}

void add_array_elemnts(int number, int arr[], int& arrlenth) {

    arr[arrlenth] = number;
    arrlenth++;

}

void copy_prine_elmnts_array(int arr1[], int arr2[], int arr1lenth, int& arr2lenth) {

    for (int i = 0; i < arr1lenth; i++) {

        if(check_prime_number(arr1[i]) == enuprime::prime)
        add_array_elemnts(arr1[i], arr2, arr2lenth);

    }
}


int main()
{
    srand((unsigned)time(NULL));

    int arr[100];
    int arrlenth = read_number("enter the array lenth: ");

    give_random_array_elemnts(arr, arrlenth);

    int arr2[100], arr2lenth=0;
    copy_prine_elmnts_array(arr, arr2, arrlenth, arr2lenth);

    cout << "arra 1 is: ";
    print_aray(arr, arrlenth);

    cout << "prime numbers: ";
    print_aray(arr2, arr2lenth);
}
