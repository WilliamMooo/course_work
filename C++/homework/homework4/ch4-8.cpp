#include <iostream>
using namespace std;

double Legendre(int n, double x) {
    if (n == 0) return 1;
    if (n == 1) return x;
    else return ((2*n - 1)*x - Legendre(n-1, x) - (n - 1)*Legendre(n-2, x))/n;
}

int main() {
    int n;
    double x;
    cout << "Please input the value of n: ";
    cin >> n;
    cout << "Please input the value of x: ";
    while(cin >> x){
        cout << "Pn(x) = " << Legendre(n, x) << endl;
        cout << "Please input the value of x: ";
    }
    return 0;
}