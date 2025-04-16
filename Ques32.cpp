// 32. Calculate the sum of all elements in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter " << n << " elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int sum = 0;

    for (int i = 0; i < n; i++)
    {
        sum = sum + arr[i];
       
    }
    cout << "The sum of all the elements of array is: " << sum << endl;
    return 0;
}