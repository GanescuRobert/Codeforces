
#include <iostream>
#define ull unsigned long long
#define ll long long
#define forn(i,n) for(ll i=0;i<n;++i)
#define forAB(i,a,b) for(ll i=a;i<=b;i++)
#define all(container) container.begin(),container.end()
#define SpeedForce ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
	SpeedForce
		int n;
	cin >> n;
	int contor = 0;

	int firstValue, secondValue;
	cin >> firstValue >> secondValue; contor += 2;
	while (true) {
		if (firstValue % 2 != secondValue % 2)
			break;
		cin >> secondValue; contor++;
	}
	if (contor > 2) {
		cout << contor;
		return 0;
	}

	int temp; cin >> temp;
	if (temp % 2 == firstValue % 2)
		cout << 2;
	else
		cout << 1;

	return 0;
}