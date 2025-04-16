// . Swap two numbers (without using a third variable). 

#include<bits/stdc++.h>
using namespace std;
int main(){
int num1, num2;
cout<<"Enter two numbers\n";
cout<<"num1: ";//10
cin>> num1;
cout<<"num2: ";//5
cin>> num2;

num1 = num1 + num2; //15
num2 = num1 - num2; //15-5 = 10 
num1 = num1 - num2;
 

cout << "After swapping\n";
cout << "num1 = " << num1 << "\n";
cout << "num2 = " << num2 << "\n";

 return 0;
}