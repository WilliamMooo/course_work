#include <iostream>
using namespace std;

int main() {
    double a, x_1, x_2;
    cout << "Please input the number of squares: " << endl;
    while(cin >> a) {
        x_1 = a;
        x_2 = 0.5*(x_1 + (a/x_1));
        while(x_1 - x_2 > 1e-5 || x_2 - x_1 > 1e-5) {
            x_1 = x_2;
            x_2 = 0.5*(x_1 + (a/x_1));
        }
        cout << "Square root of " << a << " is " << x_2 << endl;
        cout << "Please input the number of squares: " << endl;
    }
    return 0;
}