#include <iostream>
using namespace std;

int main() {
    int a = 2, now = 0, sum = 0, n;
    while(cin >> n) {
        for (int i = 0; i < n; i++) {
            now += a;
            a *= 10;
            sum += now;
        }
        cout << "S_n = " << now << endl;
        sum = 0;
        a = 2;
    }
    return 0;
}