// 30. Print the sum of all numbers divisible by 5 between 1 and 100.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int total = 0;
    for (int i = 1; i <= 100; i++)
    {
        if (i % 5 == 0)
        {
            total = total + i;
        }
    }
    cout << "The sum of all numbers divisible by 5 is: " << total << endl;
    return 0;
}