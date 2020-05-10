#include <iostream>
using namespace std;
int main() {
	int k, r; cin >> k >> r;
	int ans;

	k = k % 10;
	for (ans = 1;; ans++) {
		if ((k * ans) % 10 == 0 || (k * ans - r) % 10 == 0)
			break;
	}
	cout << ans;
}