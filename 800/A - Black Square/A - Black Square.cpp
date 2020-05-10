#include <iostream>
#include <string>
using  namespace std;
int main() {
	int* arr = new int[3];
	int* contor = new int[3];
	for (int i = 0; i <= 3; i++) {
		cin >> arr[i];
		contor[i] = 0;
	}
	string s; cin >> s;
	for (auto it : s)
		contor[it - '0' - 1]++;
	int ans = 0;
	for (int i = 0; i <= 3; i++)
		ans += arr[i] * contor[i];
	cout << ans;
}