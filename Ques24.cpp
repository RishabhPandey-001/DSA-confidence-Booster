// 24. Calculate the sum of digits of a number. 
#include<bits/stdc++.h>
using namespace std;
int main(){
int num, sum = 0, lastdigit;
cout<<"Enter the number: ";
cin>>num;

while (num != 0)
{
    lastdigit = num%10;
    sum = lastdigit + sum;
    num = num/10;
}
cout<<"The sum of digits of number is: "<< sum << endl;
 return 0;
}