#include <iostream>
#include <vector>
using namespace std;

//ifstream in("input.txt");
//ofstream out("output.txt");
int main() {
	int numOfRooms;
	cin >> numOfRooms;
	while (numOfRooms-- != 0) {
		int c, sum;
		cin >> c >> sum;
		if (sum == 1) {
			cout << 1 << endl;
			continue;
		}
		vector<int>values;
		while (sum != 0) {
			int temp;
			temp = sum / c;
			sum -= temp;
			c--;
			values.emplace_back(temp);
		}
		int ans = 0;
		for (auto it : values)
			ans += (it * it);
		cout << ans << endl;
		values.clear();
	}
}