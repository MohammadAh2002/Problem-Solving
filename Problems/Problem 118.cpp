/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    then print Minimum Number

    Input:
    10

    Output:
    Array Elements:
    30 99 72 47 95 67 29 13 80 64
    Min Number is: 13

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

void print_min_of_array(int arr[], int arrlenth) {

    int max_number = arr[0];

    for (int i = 0; i < arrlenth; i++) {

        if (arr[i] <= max_number) {

            max_number = arr[i];
        }
    }

    cout << "the max number in the array is: " << max_number << endl;
}

int main()
{
    srand((unsigned)time(NULL));

    int arrlenth = read_number("enter the lenth of the array: ");
    int arr[100];

    give_random_array_elemnts(arr, arrlenth);

    print_aray(arr, arrlenth);
    print_min_of_array(arr, arrlenth);

    return 0;

}
