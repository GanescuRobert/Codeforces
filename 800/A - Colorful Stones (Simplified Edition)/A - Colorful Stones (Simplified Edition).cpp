#include<iostream>
#include <string>
using namespace std;

int main() {
	string str1, str2; cin >> str1 >> str2;

	int ans = 0;
	int pos = 0;
	while (ans < str1.size()) {
		for (; pos < str2.size(); pos++)
			if (str2[pos] == str1[ans]) {
				ans++;
				pos++;
				break;
			}
		if (pos == str2.size())
			break;
	}
	cout << ans + 1;
}