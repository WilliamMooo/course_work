#include <iostream>
#include <string>
using namespace std;

int main() {
    int n = 0, flag = 0;
    cout << "Please input the number of string(less than 20): ";
    cin >> n;
    string str[20];
    for (int i = 0; i < n; i++) {
        cout << "String " << i+1 << " is: ";
        cin >> str[i];
    }
    cout << "Result: " << endl;
    for(int i = 0; i < n; i++) {
        if (str[i][0] == 'A') {
            cout << str[i] << endl;
            flag = 1;
        }
    }
    if (!flag) cout << "No eligible string!" << endl;
    return 0;
}