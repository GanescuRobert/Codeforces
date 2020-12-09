#include <iostream>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;
//https://codeforces.com/contest/127/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    double dist = 0.0;
    double time = 0.0;
    int n, k;    cin >> n >> k;
    
    double x, y;
    pair<int, int> from, to;
    cin >> from.first >> from.second; n--;
    while (n--) {
        cin >> to.first >> to.second;
        
        x = abs(from.first - to.first);
        y = abs(from.second - to.second);
        
        dist += sqrt(x * x + y * y);
        
        from = to;
    }
    time = dist / 50;
    printf("%.9f",k * time);
}