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


vector<bool> vis(1010, false);
vector<int> adj[1010];

void dfs(int n) {
	if (vis[n]) {
		cout << n << ' ';
		return;
	}
	vis[n] = true;
	for (auto it : adj[n])
		dfs(it);
}


int main() {
	SPEEDFORCE;
	int n;	cin >> n;

	forAB(i, 1, n) {
		int to; cin >> to;
		adj[i].emplace_back(to);
	}
	forAB(i, 1, n) {
		for (auto it : vis)
			it = false;
		dfs(i);
	}
	return 0;
}