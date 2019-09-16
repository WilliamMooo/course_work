#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float val;
    cout << "Please input a fahrenheit: ";
    cin >> val;
    cout << setiosflags(ios::fixed) << setprecision(2);
    cout << "Corresponding celsius is: " << (5*(val-32))/9 << endl;
    return 0;
}