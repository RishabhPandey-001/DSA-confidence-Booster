// 37. Count vowels and consonants in a string. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    int vowels =0, consonants = 0;
    cout << "Enter a string: ";
    getline(cin, str);
    for (char ch : str)
    {
       ch = tolower(ch);
       if(isalpha(ch)){
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
        vowels++;
    else
        consonants++;
        
       }
    }
    cout << "Number of vowels: " << vowels << endl;
    cout << "Number of consonants: " << consonants << endl;

 return 0;
}