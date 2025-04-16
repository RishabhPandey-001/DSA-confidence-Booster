// 10. Print true if a person is eligible to vote (age >= 18), otherwise false.

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int age;
    cout << "Enter the age: ";
    cin >> age;
    if (age >= 18)
    {
        cout << "True: You can vote" << endl;
    }
    else
        cout << "Opps.. you cannot vote" << endl;

    return 0;
}