#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define ull unsigned long long
//https://codeforces.com/contest/768/problem/A
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int size; cin >> size;
	vector<ull> arr;
	
	for (int i = 0; i < size; i++) {
		ull temp; cin >> temp;
		arr.emplace_back(temp);
	}
	
	if (size < 3) {
		cout << '0';
		return 0;
	}

	sort(begin(arr), end(arr));
	cout << count_if(begin(arr), end(arr), [&](ull& temp) {
			return (temp != arr[0] && temp != arr[size - 1]);
			});
}
