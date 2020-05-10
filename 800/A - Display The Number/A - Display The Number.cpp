
#include <iostream>
using namespace std;

int main()
{
	long long t; cin >> t;
	while (t--) {
		int ans = 0;
		long long n; cin >> n;

		ans = n / 2;
		if (n % 2 == 1) {
			cout << 7;
			ans--;
		}
		cout << string(ans, '1') << endl;
	}
