#include <iostream>
using namespace std;

int fac(int n) {
    if (n == 1) return 1;
    else return n*fac(n-1);
}

int main() {
    int a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    cout << fac(a) + fac(b) + fac(c) << endl;
    return 0;
}