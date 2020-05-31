#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    unsigned long long n, k; cin >> n >> k;
    unsigned long long T = n / 2 + n % 2;
    if (k > T) {
        cout << 2 * (k-T);
    }
    else {
        cout<<2* k - 1;
    }
}
/*

2 * k - 1
1->1
2->3
3->5
4->7
5->9
2*k
1+5->2
2+5->4
3+5->6
4+5->8
5+5->10
*/