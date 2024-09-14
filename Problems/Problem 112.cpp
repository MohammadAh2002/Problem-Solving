/*

    Write a program to fill array two arrays with max size 100 with random numbers from 1 to 100,
    sum their elements in a third array and print the results.

    Input:
    10

    Output:

    Array 1 elements:
    42 68 35 1 70 25 79 59 63 65

    Array 2 elements:
    6 46 82 28 62 92 96 43 28 37

    Sum of array1 and array2 elements:
    48 114 117 29 132 117 175 102 91 102

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

void sum_2_arrays(int arr[],int arr2[], int arr3[], int lenth) {

    for (int i = 0; i < lenth; i++) {

        arr3[i] = arr[i] + arr2[i];
    }

}

int main()
{
	srand((unsigned)time(NULL));

    int lenth = read_number("enter the array lenth: ");

    int arr[100], arr2[100];
    give_random_array_elemnts(arr,lenth);
    give_random_array_elemnts(arr2,lenth);

    cout << "array [1]: ";
    print_aray(arr, lenth);
    cout << "array [2]: ";
    print_aray(arr2,lenth);

    int arr_sum[100];
    sum_2_arrays(arr, arr2, arr_sum, lenth);

    cout << "the sum of the 2 arrays is: ";
    print_aray(arr_sum, lenth);
}
