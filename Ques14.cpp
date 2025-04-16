// 14. Check if a year is a leap year.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int year;
    cout << "Enter year: ";
    cin >> year;
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)

    {
        cout << "This is a leap year";
    }
    else
        cout << "This is not a leap year" << endl;
    return 0;
}