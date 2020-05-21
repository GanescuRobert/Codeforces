// A. Team Olympiad.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
	 vector<int> onePos;
	 vector<int> twoPos;
	 vector<int> threePos;

	int size; cin >> size;
	for (int i = 1; i <= size; i++) {
		int temp; cin >> temp;
		if (temp == 1)
			onePos.emplace_back(i);
		else
		if (temp == 2)
			twoPos.emplace_back(i);
		else
		if (temp == 3)
			threePos.emplace_back(i);
	}

	int noTeams = min(min(onePos.size(), twoPos.size()), threePos.size());
	cout << noTeams<<endl;
	for (int i = 0; i < noTeams; i++) 
		cout << onePos[i] << ' ' << twoPos[i] << ' ' << threePos[i] << endl;
	
}
