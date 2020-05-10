#include <iostream>
#include <list>
using namespace std;

int main() {
	int size; cin >> size;
	list<int> deck;
	while (size--) {
		int temp; cin >> temp;
		deck.push_back(temp);
	}
	int Sereja = 0, Dima = 0;
	while (deck.size() > 1) {
		if (deck.front() > deck.back()) {
			Sereja += deck.front(); deck.pop_front();

			if (deck.front() > deck.back()) {
				Dima += deck.front(); deck.pop_front();
			}
			else {
				Dima += deck.back(); deck.pop_back();
			}

		}
		else {
			Sereja += deck.back(); deck.pop_back();

			if (deck.front() > deck.back()) {
				Dima += deck.front(); deck.pop_front();
			}
			else {
				Dima += deck.back(); deck.pop_back();
			}


		}
	}
	if (!deck.empty()) {
		Sereja += deck.front();
	}
	cout << Sereja << ' ' << Dima;
}