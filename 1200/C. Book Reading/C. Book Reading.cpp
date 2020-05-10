#include <iostream>
#include <algorithm>
#include <vector>
#include <numeric>
#define ll long long 
#define ull unsigned long long
using namespace std;
int main() {
	int q; cin >> q;
	while (q-- != 0) {
		ull lastPage, divPage;
		cin >> lastPage >> divPage;
		vector<int> lastDigit;
		int sum = 0;
		for (int it = 1; it <= 10; it++) {
			int temp = (divPage * it) % 10;
			lastDigit.push_back(temp);
			sum += temp;
		}

		int sizeLastDigit = lastDigit.size();
		ull pageNum = lastPage / divPage;
		ull periods = pageNum / sizeLastDigit;

		int addSum = pageNum % sizeLastDigit;
		ull ans = periods * sum + accumulate(lastDigit.begin(), lastDigit.begin() + addSum, 0);

		cout << ans << endl;
		lastDigit.clear();
	}
	return 0;
}