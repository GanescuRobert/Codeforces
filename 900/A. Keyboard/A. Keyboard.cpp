#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    char sign; cin >> sign;
    string signKeyboard;
    
    sign == 'R' ? signKeyboard = "pqwertyuio;asdfghjkl/zxcvbnm,." : signKeyboard = "wertyuiopqsdfghjkl;axcvbnm,./z";
    
    
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    string text; cin >> text;
    
    for (auto it : text) {
        auto pos = find(begin(keyboard), end(keyboard), it);
        cout << signKeyboard[pos - keyboard.begin()];
    }

}


/*
qwertyuiop asdfghjkl; zxcvbnm,./

*/