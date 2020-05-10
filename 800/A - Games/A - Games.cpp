#include <iostream>
#include <algorithm>
using namespace std;
int main() {
	ios::sync_with_stdio(0);
	int size; cin >> size;
	int* fst = new int[size];
	int* snd = new int[size];
	for (int i = 0; i < size; i++)
		cin >> fst[i] >> snd[i];
	int ans = 0;
	for (int i = 0; i < size; i++)
		ans += count(snd, snd + size, fst[i]);
	cout << ans;
	delete[]fst, snd;
}