// 40. Convert a string to uppercase and lowercase. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    string text;
    cout<<"Enter the string: ";
    getline(cin, text);
    
    string upperText = text;
    transform(upperText.begin(), upperText.end(), upperText.begin(), :: toupper);

    string lowerText = text;
    transform(lowerText.begin(), lowerText.end(), lowerText.begin(), :: tolower);

    cout<<"The upper case of string is: "<<upperText<<endl;
    cout<<"The lower case of string is: "<<lowerText<<endl;

 return 0;
}