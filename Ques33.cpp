// 33. Count the number of even and odd numbers in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int evenNumber = 0;
    int oddNumber = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: " << endl;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            evenNumber++;
        }
        else
        {
            oddNumber++;
        }
    }
    cout << "even Number in array are: " << evenNumber << endl;
    cout << "odd Number in array are: " << oddNumber << endl;

    return 0;
}