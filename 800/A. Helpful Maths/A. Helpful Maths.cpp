#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string input; cin >> input;
	int one = count(begin(input), end(input), '1');
	int two = count(begin(input), end(input), '2');
	int three = count(begin(input), end(input), '3');

	input.clear();
	while (one--)
		input.append("1+");
	while (two--)
		input.append("2+");
	while (three--)
		input.append("3+");
	input.pop_back();
	cout << input;

}