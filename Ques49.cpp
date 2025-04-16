// 49. Sort a list in ascending and descending order. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
cout << "Enter number of elements: ";
cin >> n;

vector<int> arr(n);
cout << "Enter " << n << " elements:\n";
for (int i = 0; i < n; i++) {
    cin >> arr[i];
}

// Sort in Ascending Order
sort(arr.begin(), arr.end());
cout << "\nSorted in Ascending Order:\n";
for (int val : arr) {
    cout << val << " ";
}

// Sort in Descending Order
sort(arr.begin(), arr.end(), greater<int>());
cout << "\n\nSorted in Descending Order:\n";
for (int val : arr) {
    cout << val << " ";
}
 return 0;
}
