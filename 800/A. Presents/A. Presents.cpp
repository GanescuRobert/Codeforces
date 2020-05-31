#include <iostream>
using namespace std;
int main()
{
	int size; cin >> size;
	int* arr = new int[size+1];
	for (int i = 1; i <= size; i++)
		cin >> arr[i];

	for (int i = 1; i <= size; i++) {
		for (int j = 1; j <= size; j++) {
			if (i == arr[j]) 
				cout << j << ' ';
		}
	}
	delete[]arr;
}