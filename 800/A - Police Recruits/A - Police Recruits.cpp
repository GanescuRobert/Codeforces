#include <iostream>
using namespace std;
int main() {
	int size; cin >> size;
	int ans = 0;
	int temp = 0;
	while (size--) {
		int input; cin >> input;
		temp += input;
		if (temp < 0) {

			ans++;
			temp = 0;
		}
	}
	cout << ans;
}