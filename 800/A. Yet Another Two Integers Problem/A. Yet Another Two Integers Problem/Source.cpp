#include <iostream>
#include <cmath>
using namespace std;

int main() {
	long long from, to;
	int qCases;
	cin >> qCases;
	int ans;
	while (qCases--) {
		cin >> from >> to;
		from % 10 == to % 10 ? ans = 0 : ans = 1;
		ans += abs(from - to) / 10;
		cout << ans << '\n';
	}
}