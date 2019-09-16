#include <iostream>
#include "Box.h"
using namespace std;

void Box::setData() {
    cout << "Length: ";
    cin >> length;
    cout << "Width: ";
    cin >> width;
    cout << "Height: ";
    cin >> height;
}

float Box::volume(float length, float width, float height) {
    return length*width*height;
}

void Box::showVolume() {
    cout << "Volume: " << volume(length, width, height);
}