#include <iostream>
using namespace std;

int main() {
    int x, y, z, num;
    for (num = 100; num < 1000; num++) {
        x = num / 100;
        y = (num / 10) % 10;
        z = num % 10;
        if (num == x*x*x + y*y*y + z*z*z) cout << num << endl;
    }
    return 0;
}