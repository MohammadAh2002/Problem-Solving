/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    read number and print if it's found or not.

    Input:
    10

    Output:
    Array 1 elements:
    83 92 66 21 62 96 40 13 19 30

    Result 1:
    Please enter a number to search for?
    66

    Number you are looking for is: 66
    Yes, The number is found:-)

    Result 2:

    Please enter a number to search for?
    70

    Number you are looking for is: 70
    No, The number is not found:-(

*/

#include <iostream>
#include <cstdlib>

using namespace std;

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

bool check_number_in_array(int arr[], int arrlenth, int check_number) {

    for (int i = 0; i <= arrlenth; i++) {

        if (arr[i] == check_number) {

            return true;
        }
    }

    return false;

}

int main()
{
    srand((unsigned)time(NULL));

    int arrlenth = read_number("enter the array lenth: ");
    int arr[100];

    give_random_array_elemnts(arr, arrlenth);
    cout << "array elemnts is: ";
    print_aray(arr, arrlenth);

    int number_to_check = read_number("what is the number you want to srech for: ");

    bool foundornot = check_number_in_array(arr, arrlenth, number_to_check);

    if (foundornot == false) {

        cout << "the number you want is: " << number_to_check << endl;
        cout << "the number is not found :-(\n";
    }
    else {

        cout << "the number you want is: " << number_to_check << endl;
        cout << "yes the number found :-)";

    }

    return 0;

}
