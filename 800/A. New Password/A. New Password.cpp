#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n, k; cin >> n >> k;
    string output;
    for (char i = 'a'; i < k + 'a'; i++)
        output += i;
       n -= k;
    
       
    bool temp = true;
    while (n--) {
        if (temp) {
            output += output[0];
            temp = false;
        }
        else {
            output += output[1];
            temp = true;
        }
    }
    cout << output;
}


