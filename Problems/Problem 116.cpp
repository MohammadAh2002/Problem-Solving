/*

    Write a program to fill array with max size 100 with random numbers from 1 to 100,
    then print average of all number

    Input:
    10

    Output:
    Array Elements: 24 36 44 73 8 56 98 67 33 71
    Average of all number is: 51

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

int sum_array_elemnts(int arr[100], int arrlenth) {

    int sum = 0;

    for (int i = 0; i < arrlenth; i++) {

        sum = sum + arr[i];
    }
        
    return sum;

}

void average_of_array(int arr[100], int arrlenth) {

    cout << "the averge of the array is: " << (float )sum_array_elemnts(arr, arrlenth) / arrlenth;

}

int main()
{
    srand((unsigned)time(NULL));

    int arrlenth = read_number("enter the lenth of the array: ");
    int arr[100];

    give_random_array_elemnts(arr, arrlenth);

    print_aray(arr, arrlenth);
    average_of_array(arr, arrlenth);

    return 0;

}
