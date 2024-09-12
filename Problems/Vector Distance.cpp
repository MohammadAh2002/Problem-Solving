/* 

    The program reads a vector sorts it, and performs the following operations:

    1- Prints the sum of all elements in the vector.
    2- Prints the largest difference between consecutive elements after sorting.
    3- Prints the smallest difference between consecutive elements after sorting.
    4- Prints the most repeated element (mode) in the vector.

*/

#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

void read_victor(vector <double>& v1) {

    int num;

    while (cin >> num) {

        v1.push_back(num);

    }

}

int sum_vector_elemnts(vector <double>& v1) {

    int sum = 0;

    for (double& d : v1) {

        sum += d;
    }

    return sum;

}

int calculate_the_gratest_dis(vector <double>& v1) {

    return v1.back() - v1.front();

}

int calculate_smallest_dis(vector <double>& v1) {

    int smallest_dis = 0, j = 0;
    bool firs_elmnt = true;

    while (j < v1.size()) {

        if (j + 1 == v1.size())
            break;

        if (v1[j + 1] - v1[j] < smallest_dis || firs_elmnt == true) {

            smallest_dis = v1[j + 1] - v1[j];
            firs_elmnt = false;
        }

        j++;

    }

    return smallest_dis;

}

int vector_mode(vector <double>& v1) {

    int i = 0, time_repeted = 0, counter = 0;
   

    while (i < v1.size()) {  // 5,5,10,10,10,20

        if (i + 1 == v1.size()) {

            if (counter > time_repeted) {
                time_repeted = counter;
                i++;
                continue;
            }
            break;
        }
        if (v1[i] == v1[i + 1]) {
            counter++;
            i++;
            continue;
        }
        else if (v1[i] != v1[i + 1]) {
           
            if (counter > time_repeted) {
                time_repeted = counter;   
                i++;
                continue;
            }

        }

        i++;
    
    }

    return time_repeted;

}

int main()
{

    vector <double> v1;

    read_victor(v1);

    sort(v1.begin(), v1.end());

    int sum_of_the_elemnts = sum_vector_elemnts(v1);
    int greatest_dis = calculate_the_gratest_dis(v1);
    int smallest_dis = calculate_smallest_dis(v1);
    int mode = vector_mode(v1);

    cout << "the sum of all the distance is: " << sum_of_the_elemnts << endl;
    cout << "the greatest distance is: " << greatest_dis << endl;
    cout << "the smallest distance is: " << smallest_dis << endl;
    cout << "the mode is: " << mode << endl;

    return 0;

}