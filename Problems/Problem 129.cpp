/*

    Write a program to fill a 3*3 matrix with random numbers and then write a function to sum all numbers
    in this matrix and print it ?

    Matrix 1 :
    04   06   03
    10   06   03
    07   01   08
 
    Sum of matrix 1 is : 48

*/

#include <iostream>
#include <iomanip>

using namespace std;

int RandomNumber(int From, int To)
{

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

void MatrixElmentsSum(int matrix[3][3], int rows, int colms)  {

    int sum = 0;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < colms; j++) {

            sum += matrix[i][j];

        }
    }

    printf("ths sum of the matrix elemnts is: %d", sum);

}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    MatrixElmentsSum(matrix, 3, 3);

    return 0;
}

