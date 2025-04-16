// 46. Take n inputs from user and store in a list (ArrayList).
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int num;
    cout << "Enter the number of elements in the list: ";
    cin >> num;
    vector<int> number;
    cout << "Enter " << num << " numbers: ";
    for (int i = 0; i < num; i++)
    {
        int n;
        cin >> n;
        number.push_back(n);
    }
    cout << "You entered: ";
    for (int i = 0; i < number.size(); i++)
    {
        cout << number[i] << " ";
    }

    return 0;
}