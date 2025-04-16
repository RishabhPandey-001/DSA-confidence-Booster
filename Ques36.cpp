// 36. Take a string input and print it in reverse.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    cout << "Enter the string: ";
    getline(cin, str);
    reverse(str.begin(), str.end());
    cout << "reverse string is: " << str << endl;

    return 0;
}