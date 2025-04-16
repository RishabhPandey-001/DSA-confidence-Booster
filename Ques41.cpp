// 41. Write a function to find the factorial of a number.
#include <bits/stdc++.h>
using namespace std;
int Factorial(int num)
{
    if (num == 0 || num == 1)
    {
        return 1;
    }
    else
    {
        return num * Factorial(num - 1);
    }
}
int main()
{
    int num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0)
    {
        cout << "Factorial is not defined for negative numbers." << endl;
    }
    else
    {
        cout << "Factorial of " << num << " is: " << Factorial(num) << endl;
    }

    return 0;
}