#include <iostream>
using namespace std;

int main() {
    for (int num = 1; num < 1000; num++) {
        int sum = 0;
        for (int factor = 1; factor < num/2 + 1; factor++) {
            if (num % factor == 0) sum += factor;
        }
        if (sum == num) {
            cout << num << ", it factors are ";
            for (int factor = 1; factor < num/2 + 1; factor++) {
                if (num % factor == 0) cout << factor << ",";
            }
            cout << endl;
        }
    }
    return 0;
}