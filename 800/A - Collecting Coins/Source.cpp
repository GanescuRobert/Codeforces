#include <iostream>
#include <algorithm>
using namespace std;

int main (){
	int t; cin >> t;
	while (t--) {
	int* friends = new int[3], n;
	cin >> friends[0] >> friends[1] >> friends[2] >> n;
	sort(friends, friends + 3);
	n -= ((friends[2] - friends[0]) + (friends[2] - friends[1]));
	if (n < 0) {
		cout << "NO\n";
		continue;
	}
	if (n % 3 == 0)
		cout << "YES\n";
	else
		cout << "NO\n";
}