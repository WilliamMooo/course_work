#include <iostream>
using namespace std;

int main() {
    double arr[5] = {1,3,5,7}, num;
    cout << "The origin array:";
    for (int i = 0; i < 4; i++) cout << " " << arr[i];
    cout << endl << "Please insert a number: ";
    cin >> num;
    for (int i = 0; i < 4; i++) {
        if (arr[i] >= num) {
            for (int j = 4; j > i; j--) arr[j] = arr[j-1];
            arr[i] = num;
            break;
        }
    }
    cout << "Now, array become:";
    for (int i = 0; i < 5; i++) cout << " " << arr[i];
    return 0;
}