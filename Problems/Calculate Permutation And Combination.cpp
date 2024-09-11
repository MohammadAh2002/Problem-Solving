

#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int CalculatePermutation(int a, int b) {

    int result1 = 1, result2 = 1;

    for (int i = 2; i <= a; i++) {

        result1 *= i;

    }
    for (int j = 2; j <= a - b; j++) {

        result2 *= j;

    }

    return result1 / result2;

}

int CalculateCombination(int a, int b) {

    int P = CalculatePermutation(a, b);

    int result = 1;

        for (int i = 2; i <= b; i++) {

            result *= i;

        }

        return P / result;
}

int main()
{

   cout << CalculatePermutation(5,2) << endl;

   cout << CalculateCombination(5,2) << endl;

    return 0;

}