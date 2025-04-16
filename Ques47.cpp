// 47. Find frequency of each element in a list using HashMap. 
#include<bits/stdc++.h>
using namespace std;
    int main() {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;
    
        vector<int> arr(n);
        cout << "Enter " << n << " elements:" << endl;
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
    
        unordered_map<int, int> freq; // HashMap: element -> count
    
        // Count frequency
        for (int i = 0; i < n; i++) {
            freq[arr[i]]++; // increment count of each element
        }
    
        // Display frequency
        cout << "\nFrequency of each element:\n";
        for (auto it : freq) {
            cout << it.first << " => " << it.second << endl;
        }
    
 return 0;
}