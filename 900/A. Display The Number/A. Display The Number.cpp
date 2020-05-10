#include <iostream>
#define all(T) T.begin(),T.end()
#define forn(i,n) for(int i=0;i<n;i++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)

#define ull unsigned long long
#define ll long long

#define vi vector<int>
#define pii pair<int,int>
#define mp make_pair
#define eb emplace_back
#define pb push_back

#define SPEEDFORCE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {

	SPEEDFORCE;
	ll t; cin >> t;
	while (t--) {
		int ans = 0;
		ll n; cin >> n;

		ans = n / 2;
		if (n % 2 == 1) {
			cout << 7;
			ans--;
		}
		forn(i, ans)
			cout << 1;
		cout << endl;
	}
	return 0;
}

