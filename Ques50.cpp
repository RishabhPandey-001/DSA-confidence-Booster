// 50. Create a phonebook (name → number) using HashMap and allow search by name.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    unordered_map<string, string> phonebook;
    int n;
    cout << "How many contacts do you want to add? ";
    cin >> n;
    // input contacts
    cout << "Enter the Name and Number of the contact: ";
    for (int i = 0; i < n; i++)
    {
        string name, number;
        cout << " Enter Name: ";
        cin >> name;
        cout << "Enter Number: ";
        cin >> number;
        phonebook[name] = number;
    }

    // Desired output
    string searchName;
    cout << "Enter the name you want to search: ";
    cin >> searchName;
    if (phonebook.find(searchName) != phonebook.end())
    {
        cout << "Phone Number of " << searchName << " is: " << phonebook[searchName] << endl;
    }
    else
    {
        cout << "Contact not found!" << endl;
    }

    return 0;
}