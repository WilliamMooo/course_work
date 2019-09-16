#include <iostream>
using namespace std;

void isPrimeNumber(int num) {
    int flag = 1;
    for (int i = 2; i < num; i++) {
        if (num % i == 0) flag = 0;
    }
    if (flag) cout << num << " is a prime number." << endl;
    else cout << num << " is not a prime number" << endl;
}

int main() {
    int inputVal = 0;
    while(cin >> inputVal) {
        if (inputVal <= 1) cout << "Please input a valid parameter." << endl;
        else isPrimeNumber(inputVal);
    }
    return 0;
}