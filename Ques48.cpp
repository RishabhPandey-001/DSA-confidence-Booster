// 48. Remove duplicates from a list. 
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

    unordered_set<int> uniqueElements;
    for (int i = 0; i < n; i++) {
        uniqueElements.insert(arr[i]);
    }

    cout << "\nList after removing duplicates:\n";
    for (int val : uniqueElements) {
        cout << val << " ";
    }

 return 0;
}