#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
int main()
{
	string input; getline(cin, input);
	replace(begin(input), end(input), '{', ' ');
	replace(begin(input), end(input), '}', ' ');
	replace(begin(input), end(input), ',', ' ');
	sort(begin(input), end(input));
	input.erase(unique(begin(input), end(input)), end(input));
	if (input.size() > 1) {
		cout << input.size() - 1;
	}
	else
		cout << 0;
}
