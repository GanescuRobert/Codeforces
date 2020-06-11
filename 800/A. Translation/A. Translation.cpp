#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string s; cin >> s;
    char t;
    for (auto it = s.rbegin(); it != s.rend(); it++) {
        cin >> t;
        if (*it != t) {
            cout << "NO";
            return 0;
        }
    }
    cout << "YES";
}