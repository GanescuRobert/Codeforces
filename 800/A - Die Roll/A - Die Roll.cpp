#include <iostream>
using namespace std;

int gcd(int a, int b) {
	if (b == 0)
		return a;
	return gcd(b, a % b);
}


int main() {
	int a, b, gcdab, max;
	cin >> a >> b;
	if (a < b)swap(a, b);
	gcdab = gcd(7 - a, 6);
	cout << (7 - a) / gcdab << '/' << 6 / gcdab;
}