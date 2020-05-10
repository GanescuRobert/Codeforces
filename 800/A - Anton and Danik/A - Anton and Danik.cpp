#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main() {
	int size; cin >> size;
	string input;
	cin >> input;

	int Danik = count(begin(input), end(input), 'D');
	int Anton = size - Danik;
	if (Danik < Anton) {
		cout << "Anton";
	}
	else if (Danik > Anton) {
		cout << "Danik";
	}
	else
	{
		cout << "Friendship";
	}
}