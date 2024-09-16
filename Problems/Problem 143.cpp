/*

    Write a program to check if the matrix is Sparse

    Matrix:
    0       0      12
    0       0       1
    0       0       9

    YES: it is Sparse

*/

#include <iostream>
#include <iomanip>
#include <cmath>
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

bool CheckSparceMatrix(int matrix[3][3],int row,int colms) {

    int count = 0;
    int MatrixSize = (row * colms)/2;


    for (int i = 0; i < row; i++) {
        for (int j = 0; j < colms; j++) {

            if (matrix[i][j] == 0)
                count++;

        }
    }

    return (count >= MatrixSize);
      
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];
    int mtx[3][3] = { {0,0,0}, {4,5,0}, {2,0,9} };

    FillTheMatrix(matrix, 3, 3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    if (CheckSparceMatrix(matrix, 3, 3))
        cout << "yes it's a sparce matrix.\n";
    else
        cout << "no it's not a sparce matrix.\n";

    cout << endl;

    return 0;
}

