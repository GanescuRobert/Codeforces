#include <iostream>
#include <algorithm>
#include <string>
#include <set>
using namespace std;
//https://codeforces.com/contest/520/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int size; cin >> size;
    if (size < 26) {
        cout << "NO";
        return 0;
    }
    string input; cin >> input;
    set<char> ans;
    for_each(begin(input), end(input), []( char& ch) { ch =tolower(ch);});
    ans.insert(input.begin(),input.end());
    if (ans.size()< 26) {
        cout << "NO";
        return 0;
    }
    cout << "YES";
}