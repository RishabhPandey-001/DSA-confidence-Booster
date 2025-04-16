// 39. Count the number of words in a sentence.
#include <bits/stdc++.h>
using namespace std;
int main()
{
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    stringstream ss(sentence);
    string word;
    int word_count = 0;
    while (ss >> word)
    {
        word_count++;
    }
    cout << "Number of words: " << word_count << endl;

    return 0;
}