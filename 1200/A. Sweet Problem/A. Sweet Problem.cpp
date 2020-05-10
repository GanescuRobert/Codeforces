#include <iostream>
#define all(T) T.begin(),T.end()
#define forn(i,n) for(int i=0;i<n;i++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define ull unsigned long long
#define ll long long
#define SPEEDFORCE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
	SPEEDFORCE;
	int q;
	cin >> q;
	while (q-- != 0) {
		long long a, b, c;

		cin >> a >> b;
		if (a < b)
			swap(a, b);
		cin >> c;
		if (b < c) {
			swap(b, c);
			if (a < b)
				swap(a, b);
		}
		if (a - b >= c) {
			cout << b + c << endl;
			continue;
		}
		c = c - a + b;
		b = a;
		a = b += c / 2;
		cout << a << endl;
	}
	return 0;
}