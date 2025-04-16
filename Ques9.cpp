// 9. Check if a number is divisible by both 3 and 5 using logical operators. 

#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter the number: ";
cin>>num;
if (num%3==0 && num%5 ==0)
{
    cout<<"Yes the number is divisible by 3 and 5"<< endl;
}
else
cout<<"No the number is not divisible by 3 and 5"<<endl;
 return 0;
}