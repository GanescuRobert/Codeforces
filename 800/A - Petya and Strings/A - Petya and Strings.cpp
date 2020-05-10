#include <iostream>
#include <string>
int main() {
	std::ios::sync_with_stdio(0);
	std::string firstStr, secondStr;
	std::cin >> firstStr >> secondStr;

	for (int i = 0; i < firstStr.size(); i++) {
		char fchar = tolower(firstStr[i]);
		char schar = tolower(secondStr[i]);
		if (fchar < schar) {
			std::cout << -1;
			return 0;
		}
		else if (fchar > schar) {
			std::cout << 1;
			return 0;
		}
	}
	std::cout << 0;
}