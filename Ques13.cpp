// 13. Write a program to assign grades based on marks (if-else ladder). 

#include<bits/stdc++.h>
using namespace std;
int main(){
int marks;
cout<<"Enter the marks between(0-100)";
cin>>marks;
if (marks>100||marks<0)
{
   cout<<"Invalid entered marks";
}
else if (marks>=90)
{
   cout<<"Grade A";
}
else if (marks>=70 &&  marks<90)
{
   cout<<"Grade B";
}
else if (marks>=50 &&  marks<70)
{
   cout<<"Grade C";
}
else if (marks>=33 &&  marks<50)
{
   cout<<"Grade D";
}
else 
{
   cout<<"Fail";
}
 return 0;
}