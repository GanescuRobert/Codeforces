#include <iostream>
using namespace std;
//https://codeforces.com/contest/707/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int n, m; cin >> n >> m;
    char ch;

    for (int i = 1; i <= n * m; i++) {
        cin >> ch;
        if (ch == 'C' || ch == 'M' || ch == 'Y') {
            cout << "#Color";
            return 0;
        }
    }
    cout << "#Black&White";
}