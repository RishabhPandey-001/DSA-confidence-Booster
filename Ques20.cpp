// Write a program to check if a given number is a palindrome.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    int originalnum, reversenum = 0, digit;
    cout << "Enter the number: ";
    cin >> num;

    originalnum = num;
    while (num > 0)
    {
        digit = num % 10;
        reversenum = reversenum * 10 + digit;
        num = num / 10;
    }
    if (originalnum == reversenum)
    {
        cout << originalnum << " is a palindrome." << endl;
    }
    else
    {
        cout << reversenum << " is not a palindrome." << endl;
    }

    return 0;
}