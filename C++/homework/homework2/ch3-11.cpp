#include <iostream>
using namespace std;

int main() {
    float scores;
    while (cin >> scores) {
        if (scores > 100) cout << "invalid input scores" << endl; 
        else if (scores >= 90) cout << 'A' << endl;
        else if (scores >= 80) cout << 'B' << endl;
        else if (scores >= 70) cout << 'C' << endl;
        else if (scores >= 60) cout << 'D' << endl;
        else cout << 'E' << endl;
    }
    return 0;
}