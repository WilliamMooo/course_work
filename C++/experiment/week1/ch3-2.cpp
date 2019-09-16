#include <iostream>
#include <iomanip>
using namespace std;

const float PI = 3.14;

float grith(float r) { //求圆的周长
    return 2 * PI * r;
}

float area(float r) { //求圆的面积
    return PI * r * r;
}

float ballArea(float r) { //球的表面积
    return 4 * PI * r * r;
}

float ballVolume(float r) { //球的体积
    return (4 * PI * r * r * r) / 3;
}

float cylindricalVolume(float r, float h) { //圆柱的体积
    return area(r) * h;
}

int main() {
    float r = 1.5, h = 3;
    cout << "please input the value of radius: ";
    cin >> r;
    cout << "please input the value of height: ";
    cin >> h;
    cout << "the grith of circle is: " << setiosflags(ios::fixed) << setprecision(2) << grith(r) << endl;
    cout << "the area of circle is: " << area(r) << endl;
    cout << "the area of ball is: " << ballArea(r) << endl;
    cout << "the volume of ball is: " << ballVolume(r) << endl;
    cout << "the volume of cylindrical is: " << cylindricalVolume(r, h) << endl;
    return 0;
}