// Check whether a number is positive, negative, or zero. 
#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"enter the number: ";
cin>>num;
if (num==0)
{
    cout<<"The number you entered is zero"<<endl;
}
else if (num>0)
{
  cout<<"Number is positive"<<endl;
}
else
cout<<"Number is negative"<<endl;

 return 0;
}