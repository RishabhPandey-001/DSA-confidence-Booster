// 3. Convert temperature from Celsius to Fahrenheit. 

#include<iostream>
#include <bits/stdc++.h> 
using namespace std;
int main(){
float Celsius;
float Fahrenheit;
cout<<"Enter the temperature in celsius: ";
cin >>Celsius;

Fahrenheit = (Celsius * 9.0 / 5.0) + 32;

cout << "Temperature in Fahrenheit is : " << Fahrenheit << "F" << endl;

return 0;
}