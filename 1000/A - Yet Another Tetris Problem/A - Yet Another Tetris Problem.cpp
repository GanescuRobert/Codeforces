#include <iostream>
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
		int size; cin >> size;
		vector<int> piceSizes;
		bool isYes = true;
		forn(i, size) {
			int temp; cin >> temp;
			piceSizes.emplace_back(temp);
		}
		forn(i, size - 1) {
			if (piceSizes[i] % 2 != piceSizes[i + 1] % 2) {
				cout << "NO\n";
				isYes = false;
				break;
			}
		}
		if (isYes)
			cout << "YES\n";
	}
	return 0;
}
