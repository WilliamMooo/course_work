#include <iostream>
#include "Box.h"
using namespace std;

int main() {
    Box boxes[3];
    for (int i = 0; i < 3; i++) {
        cout << "No." << i+1 << " Box:" << endl;
        boxes[i].setData();
        cout << endl;
    }
    for (int i = 0; i < 3; i++) {
        cout << "No." << i+1 << " Box:" << endl;
        boxes[i].showVolume();
        cout << endl;
    }
    return 0;
}