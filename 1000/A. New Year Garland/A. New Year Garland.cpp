
#include <iostream>
using namespace std;

void swap(int& a, int& b) {
	a ^= b;
	b ^= a;
	a ^= b;
}
int main()
{
	int t; cin >> t;
	while (t--) {
		int a, b, c;
		cin >> a >> b;
		if (a < b)
			swap(a, b);
		cin >> c;
		if (b < c) {
			swap(b, c);
			if (a < b)
				swap(a, b);
		}
		if (a - 1 > b + c)
			cout << "No" << endl;
		else
			cout << "Yes" << endl;

	}
}
