////To use cin , strings and stringstreams

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countWords(string str)
{

    stringstream s(str);
    string word;

    int count = 0;
    while (s >> word)
    {
        count++;
    }
    return count;
}

int main()
{

    string theInput;

    cout << "Enter your fav qoute : ";
    cin >> theInput;

    cout << "Your fav qoute is : \"" << theInput << "\"";
    cout << " and it counts to : " << countWords(theInput) << " no of words.\n ";

    return 0;
}