#include <iostream>
using namespace std;
#define ll long long
int main() {


	int q;
	cin >> q;
	while (q-- != 0) {
		ll battery, noGames, notInCharge, inCharge;
		cin >> battery >> noGames >> notInCharge >> inCharge;
		battery--;
		if (battery < noGames * inCharge) {
			cout << "-1\n";
			continue;
		}
		ll noGamesA = (battery - noGames * inCharge) / (notInCharge - inCharge);
		cout << ((noGamesA > noGames) ? noGames : noGamesA) << endl;
	}
}