#include <iostream>
using namespace std;

int main() {
    int x, y, a=3, b=4, c=5;
    cout << "(1)" << (a+b>c && b==c) << endl; // 1 && 0 = 0
    cout << "(2)" << (a || b+c && b-c) << endl; // 1 || 1 && 0 = 1 || 0 = 1
    cout << "(3)" << (!(a>b) && !c || 1) << endl; // 0 && 0 || 1 = 1 || 1 = 1
    cout << "(4)" << (!(x=a) && (y=b) && 0) << endl; // 1 && 1 && 0 = 0
    cout << "(5)" << (!(a+b)+c-1 && b+c/2) << endl; // 0+5-1 && 6 = 1
    return 0;
}