#include <iostream>
using namespace std;

int main() {
    int arr[] = {8,6,5,4,1}, arrReverse[5];
    cout << "The origin array:";
    for (int i = 0; i < 5; i++) cout << " " << arr[i];
    for (int i = 0; i < 5; i++) arrReverse[i] = arr[4-i];
    cout << endl << "The reverse array:";
    for (int i = 0; i < 5; i++) cout << " " << arrReverse[i];
    return 0;
}