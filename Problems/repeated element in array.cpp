/*

    Write a program to read N elements and store them in array then print all array elements and ask for a number to check, then print how many number a certain element repeated in that array.

    Input:
    5

    Enter array elements:
    Element [1]: 1
    Element [2]:1
    Element [3]:1
    Element [4]: 2
    Element [5]: 3

    Enter the number you want to check: 1

    Output:
    Original Array: 1 1 1 2 3 3
    1 is Repeated 3 Time(s)

*/

#include <iostream>

using namespace std;

int read_number(string massege) {

    cout << massege;

    int number;
    cin >> number;

    return number;

}

void read_array_elemnts(int arr[], int lenth) {

    for (int i = 0; i < lenth; i++) {

        cout << "what is elemnt number[" << i + 1 << "]: ";
        cin >> arr[i];
    }
}

int check_number_repeat(int number_to_check, int ArrLenth, int arr[]) {

    int sum = 0;

    for (int i = 0; i < ArrLenth; i++) {

        if (arr[i] == number_to_check)
            sum += 1;
    }

    return sum;

}

void print_aray(int arr[], int arrlenth) {

    cout << "array elemnts is: ";

    for (int i = 0; i < arrlenth; i++) {

        cout << arr[i] << " ";
    }
    cout << endl;
}

void print_result(int number_to_check, int result) {

    cout << number_to_check << " repeated " << result << " times\n";

}

int main()
{
    
    int arrlenth = read_number("enter the lenth of the array: ");
    int arr[100];
    read_array_elemnts(arr, arrlenth);
    int number_to_check = read_number("what is the number you want to check: ");

    print_aray(arr, arrlenth);
    print_result(number_to_check,check_number_repeat(number_to_check, arrlenth, arr));

    return 0;

}
