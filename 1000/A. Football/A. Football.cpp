#include <iostream>
using namespace std;
//https://codeforces.com/contest/43/problem/A
int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int size; cin >> size;
    string Team1; int T1=1; cin >> Team1;
    string Team2;
    int i = 2;
    for (; i <= size; i++) {
        string temp; cin >> temp;
        if (Team1 != temp) {
            Team2 = temp;
            break;
        }
        T1++;
    }
    i++;
    for (; i <= size; i++) {
        string temp; cin >> temp;
        if (Team1 == temp)
            T1++;
    }

    if (T1 > size / 2 )
        cout << Team1;
    else
        cout << Team2;
}