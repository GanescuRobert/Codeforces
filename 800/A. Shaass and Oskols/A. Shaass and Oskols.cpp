#include <iostream>
using namespace std;
int main() {
	int noWires; cin >> noWires;
	int* birdsPerWire = new int[noWires+1];
	for (int i = 1; i <= noWires; i++) 
		cin >> birdsPerWire[i];
	
	int noShots; cin >> noShots;
	while (noShots--) {
		int wirePos, birdPos;
		cin >> wirePos >> birdPos; 
		if(wirePos!=1)
			birdsPerWire[wirePos - 1] += birdPos - 1;
		if(wirePos!=noWires)
			birdsPerWire[wirePos + 1] += birdsPerWire[wirePos] - birdPos;
		
		birdsPerWire[wirePos] = 0;
	}
	for (int i = 1; i <= noWires; i++)
		cout<< birdsPerWire[i]<<'\n';
	delete[]birdsPerWire;
}