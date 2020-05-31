#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(0), cin.tie(0), cout.tie(0);
    int size; cin >> size;
    vector<int> arr;
    for (int i = 0; i < size; i++) {
        int temp; cin >> temp;
        arr.emplace_back(temp);
    }
    sort(arr.begin(), arr.end());
    int A=arr[size - 1];
    int B = accumulate(arr.begin(), arr.end(), 0) - A;
    int ans = 1;
    for (int i = size - 2; i >= 0; i--) {
        if (A <= B) {
            A += arr[i];
            B -= arr[i];
            ans++;
        }
    }
    cout << ans;
}