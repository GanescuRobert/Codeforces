// A. Love Triangle.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#define all(T) T.begin(),T.end()
#define forn(i,n) for(int i=0;i<n;i++)
#define forAB(i,a,b) for(int i=a;i<=b;i++)

#define ull unsigned long long
#define ll long long

#define vi vector<int>
#define pii pair<int,int>
#define mp make_pair
#define eb emplace_back
#define pb push_back

#define SPEEDFORCE ios::sync_with_stdio(0); cin.tie(0); cout.tie(0)
using namespace std;

int main()
{
	int n; cin >> n;
	int* v = new int[n];
	forAB(i, 1, n)
		cin >> v[i];
	forAB(i, 1, n)
		if (v[v[v[i]]] == i) {
			cout << "YES";
			return;
		}
	cout << "NO";
}
