#include <iostream>
using namespace std;

void sort(int *arr, int n, int m) {
	int *temp;
	temp = new int [n-m];
	for (int i = 0; i < n - m; i++) temp[i] = arr[i]; //把m前面的数存到数组temp
	for (int i = 0; i < m; i++) arr[i] = arr[n-m+i]; //把m和后面的数移到数组arr前面
	for (int i = 0; i < n - m; i++) arr[m+i] = temp[i]; //把temp的元素填到数组arr的m后
}

int main() {
	int n = 0, m = 0, *arr;
	cout << "The length of array: ";
	cin >> n;
	arr = new int [n];
	cout << "Please input elements of array: ";
	for (int i = 0; i < n ; i++) cin >> arr[i];
	cout << "The numbers to be adjusted: ";
	cin >> m;
	sort(arr, n, m);
	cout << "The sorted array: ";
	for (int i = 0; i < n; i++) cout << arr[i] << " ";
	return 0;
}