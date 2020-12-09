#include <iostream>
using namespace std;
//https://codeforces.com/contest/69/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int size; cin >> size;
    int ansX=0,ansY=0,ansZ = 0;
    
    
    while (size--) {
        int tempX, tempY, tempZ; cin >> tempX >> tempY >> tempZ;
        ansX += tempX;
        ansY += tempY;
        ansZ += tempZ;
    }
    ansX == 0&&ansY==0&&ansZ==0 ?
        cout << "YES" :
        cout << "NO";
}