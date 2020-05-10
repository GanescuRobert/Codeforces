
#include <fstream>
#include <iostream>
#include <cstring>
using namespace std;

int checkNumber(char numar[9]) {
	int Taxi = 1,
		Pizza = 2,
		Girl = 3;
	for (unsigned i = 1; i < strlen(numar); i++) {
		if (numar[i] == '-')
			i++;
		if (numar[0] != numar[i]) {
			Taxi = 0; break;
		}
	}
	if (Taxi)
		return Taxi;
	else
		for (unsigned i = 0; i < strlen(numar) - 1; i++) {
			if (numar[i] == '-')
				i++;
			unsigned j = i + 1;
			if (numar[j] == '-')
				j++;
			if (numar[i] <= numar[j]) {
				Pizza = 0; break;
			}
		}

	if (Pizza == 2)
		return Pizza;
	else
		return Girl;
}

struct {
	int s;
	char nume[21];
	char numar[9];

	int numereTaxi = 0,
		numerePizza = 0,
		numereGirl = 0;
}Friend[101];

int main() {
	int n;
	int type;

	cin >> n;

	//1st friend
	cin >> Friend[1].s;
	cin.get();
	cin.get(Friend[1].nume, 21);
	cin.get();
	for (int j = 1; j <= Friend[1].s; j++) {
		cin.get(Friend[1].numar, 9);
		type = checkNumber(Friend[1].numar);
		cin.get();
		if (type == 1)
			Friend[1].numereTaxi++;
		else
			if (type == 2)
				Friend[1].numerePizza++;
			else
				Friend[1].numereGirl++;
	}

	//1st Max
	int maxTaxi = Friend[1].numereTaxi;
	int maxPizza = Friend[1].numerePizza;
	int maxGirl = Friend[1].numereGirl;


	//next friends
	for (int i = 2; i <= n; i++) {
		cin >> Friend[i].s;
		cin.get();
		cin.get(Friend[i].nume, 21);
		cin.get();
		for (int j = 1; j <= Friend[i].s; j++) {
			cin.get(Friend[i].numar, 9);
			cin.get();
			type = checkNumber(Friend[i].numar);
			if (type == 1)
				Friend[i].numereTaxi++;
			else
				if (type == 2)
					Friend[i].numerePizza++;
				else
					Friend[i].numereGirl++;
		}
		//Max of all 
		if (Friend[i].numereTaxi > maxTaxi)
			maxTaxi = Friend[i].numereTaxi;

		if (Friend[i].numerePizza > maxPizza)
			maxPizza = Friend[i].numerePizza;

		if (Friend[i].numereGirl > maxGirl)
			maxGirl = Friend[i].numereGirl;
	}

	char stringTaxi[2200] = "If you want to call a taxi, you should call: ";
	char stringPizza[2200] = "If you want to order a pizza, you should call: ";
	char stringGirl[2200] = "If you want to go to a cafe with a wonderful girl, you should call: ";

	for (int i = 1; i <= n; i++) {
		if (Friend[i].numereTaxi == maxTaxi) {
			strcat_s(stringTaxi, Friend[i].nume);
			strcat_s(stringTaxi, ", \0");
		}
		if (Friend[i].numerePizza == maxPizza) {
			strcat_s(stringPizza, Friend[i].nume);
			strcat_s(stringPizza, ", \0");
		}

		if (Friend[i].numereGirl == maxGirl) {
			strcat_s(stringGirl, Friend[i].nume);
			strcat_s(stringGirl, ", \0");

		}
	}

	stringTaxi[strlen(stringTaxi) - 2] = '.';
	stringTaxi[strlen(stringTaxi) - 1] = 0;

	stringPizza[strlen(stringPizza) - 2] = '.';
	stringPizza[strlen(stringPizza) - 1] = 0;

	stringGirl[strlen(stringGirl) - 2] = '.';
	stringGirl[strlen(stringGirl) - 1] = 0;

	cout << stringTaxi << '\n' << stringPizza << '\n' << stringGirl;
}