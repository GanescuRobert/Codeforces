
#include <iostream>
#include <algorithm>
using namespace std;
//https://codeforces.com/contest/567/problem/A
int main()
{
	int size; cin >> size;
	int* arr = new int[size];
	for (int i = 0; i < size; i++) {
		cin >> arr[i];
	}

	//first
	cout << abs(arr[0] - arr[1]) << ' ' << abs(arr[0] - arr[size - 1]) << endl;
	
	//1 --> size-1
	for (int i = 1; i < size - 1; i++) {
		cout << min(abs(arr[i] - arr[i - 1]), abs(arr[i] - arr[i + 1]))
			<< ' '
			<< max(abs(arr[i] - arr[0]), abs(arr[i] - arr[size - 1]))
			<< endl;
	}
	
	//last
	cout << abs(arr[size - 1] - arr[size - 2]) << ' ' << abs(arr[0] - arr[size - 1]);

}
