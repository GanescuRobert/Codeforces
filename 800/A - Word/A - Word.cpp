#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {

	string str; cin >> str;

	if (count_if(begin(str), end(str), [](char& ch) {
		if (islower(ch)) return true;
		else return false;
		})
		>= str.size() / 2 + str.size() % 2) {
		for_each(begin(str), end(str), [](char& ch) {
			ch = tolower(ch);
			});
	}
	else {
		for_each(begin(str), end(str), [](char& ch) {
			ch = toupper(ch);
			});
	}

	cout << str;

}