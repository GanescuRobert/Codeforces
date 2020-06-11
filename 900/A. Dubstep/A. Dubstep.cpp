#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    string ans; cin >> ans;

    
    size_t index = 0;
    while (true) {
        index = ans.find("WUB", index);
        if (index == std::string::npos) break;


        ans.replace(index, 3, " ");
    }
   
    cout << ans.erase(0, ans.find_first_not_of(' '));
}
