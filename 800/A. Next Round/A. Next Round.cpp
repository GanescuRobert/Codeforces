#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int size, target;   cin >> size >> target;
   
    int ans = 0;
    int temp; cin >> temp;
    bool ok = false;
    while (size-- && temp != 0) {
        ans++;
        if (target == ans) {
            ok = true;
            break;
        }
        else {
            cin >> temp; 
        }
    }
    if(ok)
        while (size--) {
            int T; cin >> T;
            if (T == temp)
                ans++;
            else {
                cout << ans; return 0;
            }
        }
    cout << ans;
  
}
/*

18 8
10 9 8 7 6 5 2 2 2 1 0 0 0 0 0 0 0 0


*/