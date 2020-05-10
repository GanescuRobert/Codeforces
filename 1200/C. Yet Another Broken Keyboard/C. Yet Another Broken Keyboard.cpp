#include <iostream>
#include <string>
#define all(T) T.begin(),T.end()
#define forin(i,n) for(int i=0;i<n;i++)
#define forjn(j,n) for(int j=0;j<n;j++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)
#define ull unsigned long long
#define ll long long
#define SPEEDFORCE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main() {
	ios::sync_with_stdio(0);

	int n, k;
	string input, keyboard = "";
	cin >> n >> k;
	cin >> input;
	forin(i, k) {
		char temp; cin >> temp;
		keyboard += temp;
	}
	ull ans = 0;
	ull temp = 0;
	for (auto it : input)
		if (keyboard.find(it) != string::npos)
			temp++;
		else {
			ans += temp * (temp + 1) / 2;
			temp = 0;
		}
	if (temp != 0)
		ans += temp * (temp + 1) / 2;
	cout << ans;
	return 0;
}