#include <iostream>
#include <string>
using namespace std;

int max(int&& a, int&& b) {
	if (a < b)
		return b;
	return a;
}
int main()
{
	string arr1, arr2;
	cin >> arr1 >> arr2;
	if (arr1 == arr2)
		cout << -1;
	else
		cout << max(arr1.size(), arr2.size());

}