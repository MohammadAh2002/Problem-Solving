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

void give_random_array_elemnts(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        arr[i] = RandomNumber(1, 100);
    }
}

void print_aray(int arr[], int arrlenth) {

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

//*************************************
enuprime check_prime_number(int number) {

    int m = round(number / 2);


    for (int counter = 2; counter <= m; counter++) {

        if (number % counter == 0)
            return enuprime::notprime;

    }

    return enuprime::prime;

}

void copy_array_prime_elemnts(int arr[], int arr2[], int arrlenth, int& arr2lenth) {

    int counter = 0;

    for (int i = 0; i < arrlenth; i++) {

        if (check_prime_number(arr[i]) == enuprime::prime) {

            arr2[counter] = arr[i];
            counter++;
        }
    }
         arr2lenth = --counter;
}
//*************************************

int main()
{
    srand((unsigned)time(NULL));

    int arrlenth = read_number("enter the lenth of the array: ");
    int arr[100];

    give_random_array_elemnts(arr, arrlenth);
    cout << "elemnts of array[1]: ";
    print_aray(arr, arrlenth);

    int  arr2[100], arr2lenth;
    copy_array_prime_elemnts(arr, arr2, arrlenth, arr2lenth);
    cout << "prime numbers in the array is: ";
    print_aray(arr2, arr2lenth);

    return 0;

}
