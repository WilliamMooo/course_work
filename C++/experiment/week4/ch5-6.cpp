#include <iostream>
using namespace std;

int main() {
    int arr[10][10] = {0};
    for (int i = 0; i < 10; i++) {
        for(int j = 10; j > i; j--) {
            arr[i+10-j][10-j] = (10-j)*i+1;
        }
    }
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j <= i; j++) {
            cout << arr[i][j] << '\t';
        } 
        cout << endl;
    }
        return 0;
}