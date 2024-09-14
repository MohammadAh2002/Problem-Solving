/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    then print sum of all number

    Input:
    10

    Output:
    Array Elements:
    10 6 22 40 12 75 23 32 25 75
    Sum of all number is: 320

*/

#include <iostream>
#include <cstdlib>

using namespace std;

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

    cout << "array elemnts is: ";

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void sum_array_elemnts(int arr[], int arrlenth) {

    int sum = 0;

    for (int i = 0; i < arrlenth; i++) {

        sum = sum + arr[i];
    }

    cout << "the sum of the array elemts is: " << sum << endl;

}

int main()
{
    srand((unsigned)time(NULL));

    int arrlenth = read_number("enter the lenth of the array: ");
    int arr[100];

    give_random_array_elemnts(arr, arrlenth);

    print_aray(arr, arrlenth);
    sum_array_elemnts(arr, arrlenth);

    return 0;

}
