#include <iostream>
#include <vector>
using namespace std;
int main()
{
	int t; cin >> t;
	while (t--) {
		int size; cin >> size;
		vector<int> piceSizes;
		bool isYes = true;
		for(int i=0;i<size;i++) {
			int temp; cin >> temp;
			piceSizes.emplace_back(temp);
		}
		for (int i = 0; i < size; i++) {
			if (piceSizes[i] % 2 != piceSizes[i + 1] % 2) {
				cout << "NO\n";
				isYes = false;
				break;
			}
		}
		if (isYes)
			cout << "YES\n";
	}
}
 