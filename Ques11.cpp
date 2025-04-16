// 11. Find the greatest of three numbers.
#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b, c;
cout<<"Enter the value of a, b and c: ";
cin>>a>>b>>c;
if (a>b)
{
    cout<<"a is greater than b ";
}
else if (b>c)
{
    cout<<"b is greater than c";
}
else if (c>a)
{
    cout<<"c is greater than a";
}
else
cout<<"all numbrs are equal";


 return 0;
}