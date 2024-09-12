/*

    Convert String to Integer.    

*/

#include <iostream>
#include <vector>

using namespace std;

int myAtoi2(string s) {

    int i = 0, num = 0, flag = 0;

    while (s[i] == ' ')
        i++;

    if (s[i] == '-')
    {
        flag = 1;
        i++;
    }
    else if (s[i] == '+')
        i++;

    while (s[i] == '0')
        i++;

    while (s[i] != '\0')
    {
        if (s[i] >= '0' && s[i] <= '9')
        {
            if (num <= (2147483647 + (48 - s[i])) / 10)
                num = num * 10 + (s[i] - 48);
            else
            {
                if (flag == 1)
                    return -2147483648;
                else
                    return 2147483647;
            }
        }
        else
            break;
        i++;
    }
    if (flag == 1)
        num = -num;
    return num;
}


int myAtoi(string s) {

    int num = 0, i = 0, sign = 1; // Sign is +ve

    // Condition 1:- Ignore leading white space
    while (s[i] == ' ') {
        i++;
    }

    // Condition 2:- determine sign
    if (i < s.size() && (s[i] == '-' || s[i] == '+')) {
        sign = s[i] == '+' ? 1 : -1;
        i++;
    }

    // Condition 3:-integer prepare
    while (i < s.size() && isdigit(s[i])) {

        // Condition 4:- Out of bound cases
        if (num > INT_MAX / 10 || (num == INT_MAX / 10 && s[i] > '7')) {
            return sign == -1 ? INT_MIN : INT_MAX;
        }
        num = num * 10 + (s[i] - '0');
        i++;
    }
    return num * sign;
}


int main()
{

	cout << atoi("0012") << '\n';

	cout << myAtoi("0012") << '\n';

	return 0;

}
