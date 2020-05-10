
#include <iostream>
#define all(T) T.begin(),T.end()

#define forin(i,n) for(int i=0;i<n;i++)
#define forjn(j,n) for(int j=0;j<n;j++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)

#define make_pair mp
#define emplace_back eb

#define ull unsigned long long
#define ll long long

#define SPEEDFORCE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)

using namespace std;
int main()
{
	SPEEDFORCE;
	int t; cin >> t;
	while (t--) {
		ull n, k;
		cin >> n >> k;

		ull ans = floor(n / k) * k;
		if (n - ans >= k / 2)
			ans += floor(k / 2);
		else
			ans += n - ans;
		cout << ans << endl;
	}
}
