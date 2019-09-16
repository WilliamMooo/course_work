#include <iostream>
using namespace std;

int main() {
    int *arr = new int[3], *temp = new int[1];
    cout << "Please input 3 integers: ";
    for (int i = 0; i < 3; i++) {
        cin >> *arr;
        arr += 1;
    }
    arr -= 3;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (arr[i] < arr[j]) {
                *temp = arr[j];
                arr[j] = arr[i];
                arr[i] = *temp;
            }
        }
    }
    cout << "Sorted result: ";
    for (int i = 0; i < 3; i++) cout << arr[i] << " ";
    return 0;
}