#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	const string ans1 = "CHAT WITH HER!",
		ans2 = "IGNORE HIM!";
	string str; cin >> str;


	std::sort(str.begin(), str.end());
	str.erase(std::unique(str.begin(), str.end()), str.end());

	if (str.size() % 2 == 0)
		cout << ans1;
	else
		cout << ans2;
}