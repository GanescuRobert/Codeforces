#include <iostream>
#include <unordered_set>
using namespace std;
#define LEGS 4
int main() {

	unordered_set<int> horseshoes;
	for (int i = 0; i < LEGS; i++) {
		int temp; cin >> temp;
		horseshoes.insert(temp);
	}

	cout << LEGS - horseshoes.size();

}