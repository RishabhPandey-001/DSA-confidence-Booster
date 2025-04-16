// 6. Check if a number is even or odd.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << " Enter the number: ";
    cin >> num;
    if (num % 2 == 0)
    {
        cout << "This is a even number " << endl;
    }
    else
        cout << "This is a odd number" << endl;
    return 0;
}