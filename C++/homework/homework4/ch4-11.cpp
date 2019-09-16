#include <iostream>
using namespace std;

int sumSqr(int n) {
    if (n == 1) return 1;
    else return n*n + sumSqr(n-1);
}

int main() {
    int n;
    cout << "Please input the value of n: ";
    while(cin >> n){
        cout << sumSqr(n) << endl;
        cout << "Please input the value of n: ";
    }
    return 0;
}