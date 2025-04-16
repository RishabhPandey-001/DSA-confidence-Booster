// 26. Find factorial of a number using loop.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int factorial = 1;
    cout << "Enter the number: ";
    cin >> num;
    if (num < 0)
    {
        cout << "Factorial does not exist for negative numbers." << endl;
    }
    else if (num == 0 || num == 1)
    {
        cout << "Factorial of " << num << " is " << '1';
    }
    else
    {
        for (int i = 2; i <= num; i++)
        {
            factorial = factorial * i;
        }
        cout << "Factorial of " << num << " is " << factorial<<endl;
    }

    return 0;
}