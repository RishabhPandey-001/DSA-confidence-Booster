// 1. Write a program to take your name and age as input and print it. 
#include<iostream>
#include <string> 
using namespace std;
int main(){
string name;
int age;

cout<<"Enter your name: ";
cin >> name;

cout << "Enter your Age: ";
cin >> age;

cout<< "Hi "<< name << ", You are " << age <<" Years old!!" <<endl;
    return 0;
}
