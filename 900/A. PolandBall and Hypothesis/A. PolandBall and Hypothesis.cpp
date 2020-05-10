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


bool isPrime(int nr) {
	if (nr == 1)
		return false;
	forAB(i, 2, nr / 2)
		if (nr % i == 0)
			return false;
	return true;
}
int main() {

	SPEEDFORCE;
	int n; cin >> n;
	forAB(m, 1, 1000)
		if (!isPrime(n * m + 1)) {
			cout << m; return 0;
		}
	return 0;
}