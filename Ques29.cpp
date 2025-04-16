// 29. Check whether a number is an Armstrong number.
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int num, originalNum, remainder;
    int n = 0;
    double result = 0.0;

    cout << "Enter a number: ";
    cin >> num;

    originalNum = num;

    // Count number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate sum of each digit raised to the power n
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Round the result to handle floating point errors
    if (round(result) == num)
        cout << num << " is an Armstrong number." << endl;
    else
        cout << num << " is not an Armstrong number." << endl;

    return 0;
}
