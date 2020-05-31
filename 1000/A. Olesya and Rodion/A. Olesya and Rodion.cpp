#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int n, t;   cin >> n >> t; 
    if (t == 10) {
        n--;
        if (n == 0) {
            cout << -1; return 0;
        }
    }
    cout << t;
    cout << string(n - 1, '0');
}
