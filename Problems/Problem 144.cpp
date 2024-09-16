/*

    Write a program to count given number in matrix
 
    Matrix:
    9       1      12
    0       9       1
    0       9       9

    Enter the number to count in matrix?
    9

    Number 9 Count in matrix is:
    4

*/

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{
    //Function to generate a random number
    int randNum = rand() % (To - From + 1) + From;
    return randNum;
}

void FillTheMatrix(int matrix[3][3], int rows, int colms) {


    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            matrix[i][j] = RandomNumber(1, 10);

        }
    }
}

void PrintTheMatrix(int matrix[3][3], int rows, int colms) {

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < 3; j++) {

            printf("%0*d    ", 2, matrix[i][j]);

        }

        cout << endl;

    }
}

int ReadNumber() {

    int num;

    cin >> num;

    return num;

}

void HowManyTimeNumeberReapetedInMatrix(int matrix[3][3],int rows
                                        ,int colms,int num) {
    int count = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            if (matrix[i][j] == num)
                count++;

        }
    }

    printf("number %d rpeated in the matrix %d times", num, count);

}

int main()
{
    srand((unsigned)time(NULL));

    int number, matrix[3][3];

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    cout << "enter a number to count in matrix: ";

    number = ReadNumber();

    HowManyTimeNumeberReapetedInMatrix(matrix,3,3,number);

    cout << endl;

    return 0;
}

