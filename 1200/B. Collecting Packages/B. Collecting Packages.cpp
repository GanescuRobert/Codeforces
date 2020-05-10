#include <iostream>
#include <algorithm>
#include <vector>
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
	int t; cin >> t;
	while (t--) {
		int numPoints; cin >> numPoints;
		vector<pii> pos;
		while (numPoints--) {
			int x, y; cin >> x >> y;
			pos.eb(mp(x, y));
		}
		sort(all(pos));

		string ans = "";
		bool isGood = true;
		pii curr{ 0,0 };

		for (auto it : pos) {
			if (curr.first <= it.first && curr.second <= it.second) {
				forn(i, (it.first - curr.first))
					ans += 'R';
				forn(i, (it.second - curr.second))
					ans += 'U';
				curr = it;
			}
			else {
				isGood = false;
				break;
			}
		}
		if (isGood)
			cout << "YES\n" << ans << '\n';
		else
			cout << "NO\n";
	}
	return 0;
}
