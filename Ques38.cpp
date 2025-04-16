// 38. Check if a string is a palindrome.
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cout << "Enter a string: ";
    getline(cin, str);

    // Remove case sensitivity and ignore non-alphanumeric if needed (optional enhancement)
    string cleanStr = "";
    for (char ch : str) {
        if (isalnum(ch))  // Check if it's a letter or digit
            cleanStr += tolower(ch);
    }

    bool isPalindrome = true;
    int n = cleanStr.length();

    for (int i = 0; i < n / 2; i++) {
        if (cleanStr[i] != cleanStr[n - i - 1]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome)
        cout << "The string is a palindrome." << endl;
    else
        cout << "The string is not a palindrome." << endl;

 return 0;
}