#include <iostream>
#include <string>
using namespace std;

int main()
{
    int noWords; cin >> noWords;
    while (noWords--) {
        string word;
        cin >> word;
        if (word.size() > 10) {
            cout << word[0] << word.size() - 2 << *word.rbegin();
        }
        else {
            cout << word;
        }
        cout << endl;
    }

}
