#include <iostream>
using namespace std;
//https://codeforces.com/contest/282/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);

    int ans = 0;
    int size; cin >> size;
    char sign[4];
    while (size--) {
        cin >> sign;
        sign[1] == '+' ? ans++ : ans--;
    }
    cout << ans;
    
}