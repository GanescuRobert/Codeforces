#include <iostream>
#include <algorithm>
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
	char way[5] = "URDL";
	while (q-- != 0) {
		string input; cin >> input;
		int times[4];
		for (int i = 0; i < 4; i++)
			times[i] = count(all(input), way[i]);
		times[0] = times[2] = min(times[0], times[2]);
		times[1] = times[3] = min(times[1], times[3]);
		if (times[0] == 0 && times[1] > 0) {
			cout << "2\nLR\n";
			continue;
		}
		if (times[1] == 0 && times[0] > 0) {
			cout << "2\nUD\n";
			continue;
		}

		string ans = "";
		for (int i = 0; i < 4; i++)
			for (int j = 0; j < times[i]; j++)
				ans += way[i];

		cout << ans.size() << endl << ans << endl;
	}


	return 0;
}