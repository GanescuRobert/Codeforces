#include <iostream>
using namespace std;
//https://codeforces.com/problemset/problem/767/A
int main()
{
	ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
	int size; cin >> size;
	int* arr = new int[size+1];
	bool* vis = new bool[size+1];
	
	for (int i = 0; i < size; i++) {
		cin >> arr[i]; vis[i] = 0;
	}
	
	int doWork = size;
	for (int i = 0; i < size; i++) {
		vis[arr[i]] = true;
		if (arr[i] == doWork) {
			while (vis[doWork]) {
				cout << doWork<<' ';
				doWork--;
			}
		}	
		if(doWork!=0)
			cout << endl;
	}
	delete[]arr;
	delete[]vis;
}
