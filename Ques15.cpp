// 15. Take 3 sides of a triangle and check if it's valid or not. 
#include<bits/stdc++.h>
using namespace std;
int main(){
int a, b, c;
cout<<"enter the sides of triangle: ";
cin>>a>>b>>c;
if ((a+b>c) && (b+c>a) && (c+a>b))
{
   cout<<"This is a valid triangle";

}
else
{
    cout<<"This is a invalid triangle"<<endl;
}

 return 0;
}