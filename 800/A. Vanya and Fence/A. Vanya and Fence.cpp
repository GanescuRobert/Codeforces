#include <iostream>
using namespace std;
int main() {
	int n, h, ans = 0;
	cin >> n >> h;
	while (n--) {
		float a; cin >> a;
		a <= h ? ans++ : ans += 2 * (a / 2 <= h);
	}
	cout << ans;
}