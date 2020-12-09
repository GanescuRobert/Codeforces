#include <iostream>
using namespace std;
//https://codeforces.com/contest/1409/problem/C
int main() {
	int qCases;
	cin >> qCases;
	while (qCases--) {
		int n, x, y;
		cin >> n >> x >> y;
		if (n > 2) {
			int r = n-1;
			while ((y - x) % r != 0) {
				r--;
			};
			r = (y - x) / r;
			int t = y - (n - 1) * r;
			if (t <= 0)
				t = (y - 1) % r + 1;
			for (int i = t + (n - 1) * r; i >= t; i -= r)
				cout << i << ' ';
			cout << endl;


		}
		else {
			cout << x << ' ' << y << endl;
		}
	}


}