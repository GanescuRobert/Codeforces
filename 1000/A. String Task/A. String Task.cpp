#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
//https://codeforces.com/contest/118/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    const string vowels = "aoyeui";
    string input; cin >> input;
    for_each(begin(input), end(input), [&vowels](char& ch) {
        ch = tolower(ch);
        if (find(begin(vowels), end(vowels), ch) == vowels.end())
            cout << '.' << ch;
        });
}