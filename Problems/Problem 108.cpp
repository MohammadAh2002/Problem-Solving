/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    read number and return its index in array if found otherwise return -1.

    Input:
    10

    Output:
    Array 1 elements:
    80 79 12 80 81 29 3 37 25 91

    Result 1:
    Please enter a number to search for?
    12

    Number you are looking for is: 12
    The number found at position: 2
    The number found its order: 3

    Result 2:
    Please enter a number to search for?
    55

    Number you are looking for is: 55
    The number is not found:-(

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

void check_number_in_array(int arr[], int arrlenth, int check_number) {

    for (int i = 0; i <= arrlenth; i++) {

        if (arr[i] == check_number) {

            cout << "the number you are serching for is: " << check_number << endl;
            cout << "the number found in positin: " << i << endl;
            cout << "the number in order:" << i + 1 << endl;
            return;
        }
    }
    cout << "the number you are serching for is: " << check_number << endl;
    cout << "the number not found in the array :-(\n";
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

    check_number_in_array(arr, arrlenth, number_to_check);

}
 