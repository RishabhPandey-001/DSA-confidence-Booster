// 22. Print the multiplication table of a given number.
#include<bits/stdc++.h>
using namespace std;
int main(){
int num;
cout<<"Enter the number for table to print: ";
cin>>num;
for (int i = 1; i <= 10; i++)
{
    cout<< num<<'X'<<i<<'='<<num*i<<endl;
}

 return 0;
}