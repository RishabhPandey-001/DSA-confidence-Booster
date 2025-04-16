// 45. Write a function to calculate power (a^b) using recursion.
#include <bits/stdc++.h>
using namespace std;
int Power(int a, int b)
{
    if (b == 0)
    {
        return 1;
    }
    else
    {
        return a * Power(a, b - 1);
    }
}
int main()
{
    int base, exponent;
    cout << "Enter base(a): ";
    cin >> base;
    cout << "Enter Exonenet(b): ";
    cin >> exponent;
    if (exponent < 0)
    {
        cout << "Negative exponents not supported in this version." << endl;
    }
    else
        cout << base << "^" << exponent << " = " << Power(base, exponent) << endl;

    return 0;
}