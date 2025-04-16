// 8. Write a program to demonstrate all arithmetic operators with two inputs.
#include <bits/stdc++.h>
using namespace std;
int Addition(int a, int b)
{
    return a + b;
}

int Subtraction(int a, int b)
{
    return a - b;
}

int multiplication(int a, int b)
{
    return a * b;
}

int Division(int a, int b)
{
    return a / b;
}
int main()
{
    int a, b;
    cout << "Enter the value of a: ";
    cin >> a;

    cout << "Enter the value of b: ";
    cin >> b;
      // addition
      cout << "The sum of a and b is: " << Addition(a, b) << endl;
      // subtraction
      cout << "The difference of a and b is: " << Subtraction(a, b) << endl;
      // multiplication
      cout << "The product of a and b is: " << multiplication(a, b) << endl;
      // division
      cout << "The quotient of a divided by b is: " << Division(a, b) << endl;
    return 0;
}