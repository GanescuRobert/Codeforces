#include <iostream>
#include <algorithm>
using namespace std;
//https://codeforces.com/contest/1409/problem/B
long long ans(long long a, long long b, long long x, long long y, long long n) {
	if (a - n > x) {
		a -= n;
		n = 0;
	}
	else {
		n -= a - x;
		a = x;
	}
	if (b - n > y) {
		b -= n;
		n = 0;
	}
	else {
		n -= b - y;
		b = y;
	}
	return  a * b;
}

int main() {
	int qCases;
	long long a, b, x, y, n;

	cin >> qCases;
	while (qCases--) {
		int tempValue;
		cin >> a >> b >> x >> y >> n;
		cout << min(ans(a, b, x, y, n), ans( b, a, y, x, n)) << '\n';
	}
}