// 23. Count the number of digits in a given number.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num, digit = 0;
    cout << "enter the number: ";
    cin >> num;
    while (num > 0)
    {
        num = num / 10;
        ++digit;
    }
    cout << digit << endl;
    return 0;
}