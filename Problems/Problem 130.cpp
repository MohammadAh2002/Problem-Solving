/*

    Write a program to fill a 3*3 matrix with random numbers,
    print it then print the middle row and middle col

    Matrix 1:
    05   04   03
    06   01   06
    06   06   09
 
    Middle Row of Matrix 1 is:
    06   01   06

    Middle Col of Matrix 1 is:
    04   01   06

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

            printf("%0*d    ",2,matrix[i][j]);

        }

        cout << endl;

    }
}

void PrintMiddelRow(int matrix[3][3], int row,int colms) {

    int middelrow = row / 2;

    for (int i = 0; i < colms; i++) {

        cout << setw(3) << matrix[middelrow][i] << " ";

    }
    cout << '\n';
}

void PrintMiddelcolm(int matrix[3][3], int row, int colms) {

    int middelcolm = colms / 2;

    for (int i = 0; i < row; i++) {

        cout << setw(3) << matrix[i][middelcolm] << " ";

    }
    cout << '\n';
}

int main()
{
    srand((unsigned)time(NULL));

    int matrix[3][3];

    FillTheMatrix(matrix,3,3);

    cout << "matrix:\n";
    PrintTheMatrix(matrix, 3, 3);

    cout << "middel row of the matrix is:\n";
    PrintMiddelRow(matrix, 1, 3);

    cout << "middel colm of the matrix is:\n";
    PrintMiddelcolm(matrix, 3, 1);

    return 0;

}