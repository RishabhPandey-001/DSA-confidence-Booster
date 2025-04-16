// 27. Generate the Fibonacci series up to n terms.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number terms: ";
    cin >> n;
    int a = 0, b = 1;
    cout << "Fibonacci series: ";
    for (int i = 0; i <= n; i++)
    {
        cout << a << " ";
        int next = a + b;
        a = b;
        b = next;
    }

    return 0;
}