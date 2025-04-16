// 17. Simple calculator using if-else (take two numbers and an operator).
#include <bits/stdc++.h>
using namespace std;
int main()
{
    double num1, num2;
    char opera;
    cout << "Enter the value of num1 and num2: ";
    cin >> num1 >> num2;

    cout << "Enter an operator (+, -, *, /): ";
    cin >> opera;

    if (opera == '+')
    {
        cout << "Result: " << (num1 + num2) << endl;
    }
    else if (opera == '-')
    {
        cout << "Result: " << (num1 - num2) << endl;
    }
    else if (opera == '*')
    {
        cout << "Result: " << (num1 * num2) << endl;
    }
    else if (opera == '/')
    {
        if (num2 != 0)
            cout << "Result: " << (num1 / num2) << endl;
        else
            cout << "Error: Division by zero!" << endl;
    }
    else
    {
        cout << "Invalid operator!" << endl;
    }

    return 0;
}