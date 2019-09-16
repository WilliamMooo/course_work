#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int randomNum(int min, int max) {
    return rand()%(max-min)+min;
}

int main() { 
    srand((int)time(0));
    int arr[3][3], sum = 0;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            arr[i][j] = randomNum(0,9);
        }
    }
    cout << "The origin matrix is:" << endl;
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            cout << arr[i][j] << '\t';
        }
        cout << endl;
    }
    for(int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            if (i == j) sum += arr[i][j];
        }
    }
    cout << "The sum of the main diagonal elements is: " << sum;
    return 0;
}