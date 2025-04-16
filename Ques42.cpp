// 42. Write a recursive function to find Fibonacci number at position n.
// 0 1 1 2 3 5 8 13 ..............................................
#include <bits/stdc++.h>
using namespace std;
int fibonacci(int n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    else
    {
        return fibonacci(n-1) + fibonacci(n - 2);
    }
}
int main(){
int n;
cout<<"Enter the position in series: ";
cin>>n;
if (n<0)
{
    cout<<"Fibonacci is not defined for negative numbers." << endl;
}
else
{
    cout<<"The value at "<<n<<" position is "<<fibonacci(n);
}

    return 0;
}