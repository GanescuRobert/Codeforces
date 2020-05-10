#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int n; cin >> n;
	string str; cin >> str;
	for (int i = 1; i < str.size(); i++)
		if (str[i] == str[i - 1])
			str[i - 1] = '~';
	int ans = 0;
	for_each(begin(str), end(str), [&ans](const char& ch) {if (ch == '~')ans++; });

	cout << ans;
}