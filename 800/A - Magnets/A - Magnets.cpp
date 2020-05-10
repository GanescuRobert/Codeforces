#include <iostream>
#include <string>
using namespace std;
int main() {
	int magnets; cin >> magnets;
	string allMagnets;
	while (magnets--) {
		string temp; cin >> temp;
		allMagnets.append(temp);
	}
	int ans = 1;
	for (int i = 2; i < allMagnets.size(); i += 2)
		if (allMagnets[i - 2] != allMagnets[i]) {
			ans++;
		}
	cout << ans;
}