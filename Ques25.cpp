// 25. Reverse a given number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
    int num, lastdigit , rever = 0;
    cout<<"Enter the number: ";
    cin>>num;
    
    while (num > 0)
    {
        lastdigit = num%10;
        rever = lastdigit + rever * 10;
        num = num/10;
    }
    cout<<"The reverse of the number is: "<< rever << endl;
 return 0;
}