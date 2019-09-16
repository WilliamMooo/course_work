#include <iostream>
using namespace std;

int main() {
    float x;
    cout << "please input the value of x" << endl;
    while(cin >> x) {
        if (x < 1) {
            cout << "y = " << x << endl;
        } else if (x >= 1 && x <= 10) {
            cout << "y = " << 2 * x - 1 << endl;
        } else if (x >= 10) {
            cout << "y = " << 3 * x - 11 << endl;
        }
    }
    return 0;
}