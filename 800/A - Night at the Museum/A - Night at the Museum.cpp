#include <iostream>
using namespace std;
int main() {
	ios::sync_with_stdio(0);

	char start = 'a';
	string str; cin >> str;
	int ans = 0;
	for (auto it : str) {
		int dist = abs(it - start);
		if (dist > 13) {
			ans += 26 - dist;
		}
		else ans += dist;

		start = it;
	}
	cout << ans;
}