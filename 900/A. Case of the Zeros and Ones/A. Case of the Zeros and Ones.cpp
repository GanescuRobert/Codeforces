#include <iostream>
using namespace std;

long long abs(long long& T) {
    if (T < 0)
        T = -T;
    return T;
}
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    long long size; cin >> size;
    long long zero = 0;

    for(int i=1;i<=size;i++) {
        char ch; cin >> ch;
        if (ch == '0')
            zero++;
    }
  
    cout << abs(size - zero - zero);
}