#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
//https://codeforces.com/contest/807/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int size; cin >> size;
    vector<pair<int, int>> arr;
    while (size--) {
        pair<int, int> temp;
        cin >> temp.first >> temp.second;
        if (temp.first != temp.second) {
            cout << "rated";
            return 0;
        }
        arr.emplace_back(temp);
    }
    if (is_sorted(arr.begin(), arr.end(), [](const pair<int,int>&A, const pair<int, int>& B) {return A.first>B.first;}))
        cout << "maybe";
    else
        cout << "unrated";
}


/*
5
3123 3123
2777 2777
2246 2246
2245 2245
1699 1699


*/