#include <iostream>
#define all(T) T.begin(),T.end()
#define forin(i,n) for(int i=0;i<n;i++)
#define forjn(j,n) for(int j=0;j<n;j++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define ull unsigned long long
#define ll long long
#define SPEEDFORCE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
	SPEEDFORCE;
	int q; cin >> q;
	while (q-- != 0) {
		ull a, b, c;
		cin >> a >> b;
		if (a < b)
			swap(a, b);
		cin >> c;
		if (b < c)
			swap(b, c);
		if (a < b)
			swap(a, b);
		ull ans = 0;
		if (a - c > 1)
			ans = 2 * (a - c - 2);
		cout << ans << endl;
	}

	return 0;
}