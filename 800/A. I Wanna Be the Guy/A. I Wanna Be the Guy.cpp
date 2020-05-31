#include <iostream>
#include <unordered_set>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int lastLevel; cin >> lastLevel;
    int canDo;
    unordered_set<int> ans;
    
    int times = 2;
    while (times--) {
        cin >> canDo;
        while (canDo--) {
            int temp; cin >> temp;
            ans.insert(temp);
        }
    }
    if (ans.size() == lastLevel)
        cout << "I become the guy.";
    else
        cout << "Oh, my keyboard!";
}