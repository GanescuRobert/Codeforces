#include <unordered_map>
#include <unordered_set>
#include <iostream>
#include <algorithm>
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
		ull n; cin >> n;
		int digs[3];
		int numDig = 0;
		for (int i = 2; i * i < n && numDig < 2; i++)
			if (n % i == 0) {
				digs[numDig++] = i;
				n /= i;
			}
		if (numDig < 2)cout << "NO\n";
		else cout << "YES\n" << digs[0] << ' ' << digs[1] << ' ' << n << endl;
	}

	return 0;
}
