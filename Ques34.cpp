// 34. Find the second largest element in an array.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of elements in array: ";
    cin >> n;

    // Handle edge case
    if (n < 2) {
        cout << "At least two elements are required." << endl;
        return 0;
    }

    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];  
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN)
        cout << "There is no second largest element (all elements may be equal)." << endl;
    else
        cout << "The second largest element is: " << secondLargest << endl;

    return 0;
}