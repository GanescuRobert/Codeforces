#include <iostream>
#include <algorithm>
int main() {
	std::ios::sync_with_stdio(0); std::cin.tie(0);  std::cout.tie(0);
	int size; std::cin >> size;

	//int* arr = new int[size];
	int arr[100];
	for (int i = 0; i < size; i++) {
		std::cin >> arr[i];
	}
	std::sort(arr, arr + size);
	for (int i = 0; i < size; i++)
		std::cout << arr[i] << ' ';
	//delete[]arr;
}