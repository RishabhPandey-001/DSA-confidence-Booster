// 35. Reverse the elements of an array.
#include <bits/stdc++.h>
using namespace std;
int reverseArray(int arr[], int size)
{
    int start = 0, end = size - 1;
    while (start < end)
    {
        // swapping
        int temp = arr[start];
        arr[start] = arr[end];
        arr[end] = temp;
        start++;
        end--;
    }
}

int main()
{
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Original Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";
    reverseArray(arr, size);

    cout << "\nReversed Array: ";
    for (int i = 0; i < size; i++)
        cout << arr[i] << " ";

    return 0;
}