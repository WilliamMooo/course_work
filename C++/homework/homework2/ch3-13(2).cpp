#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    float profit, bonus;
    int flag;
    cout << setiosflags(ios::fixed) << setprecision(2) << "Please input the profit: ";
    while(cin >> profit) {
        float part_1 = 0, part_2 = 0;
        if (profit <= 0) {
            flag = 0;
        } else if (profit <= 10e4) {
            flag = 1;
        } else if (profit <= 20e4) {
            flag = 2;
        } else if (profit <= 40e4) {
            flag = 3;
        } else if (profit <= 60e4) {
            flag = 4;
        } else if (profit <= 100e4) {
            flag = 5;
        } else {
            flag = 6;
        }
        switch (flag)
        {
            case 0:
                part_1 = 0;
                part_2 = 0;
                break;
            case 1:
                part_1 = profit*0.1;
                break;
            case 2:
                part_1 = 10e4*0.1;
                part_2 = (profit-10e4)*0.075;
                break;
            case 3:
                part_1 = 10e4*0.1;
                part_1 += (20e4-10e4)*0.075;
                part_2 = (profit-20e4)*0.05;
                break;
            case 4:
                part_1 = 10e4*0.1;
                part_1 += (20e4-10e4)*0.075;
                part_1 += (40e4-20e4)*0.05;
                part_2 = (profit-40e4)*0.03;
                break;
            case 5:
                part_1 = 10e4*0.1;
                part_1 += (20e4-10e4)*0.075;
                part_1 += (40e4-20e4)*0.05;
                part_1 += (60e4-40e4)*0.03;
                part_2 = (profit-60e4)*0.015;
                break;
            case 6:
                part_1 = 10e4*0.1;
                part_1 += (20e4-10e4)*0.075;
                part_1 += (40e4-20e4)*0.05;
                part_1 += (60e4-40e4)*0.03;
                part_2 = (100e4-60e4)*0.015;
                part_2 = (profit-100e4)*0.01;
                break;
            default:
                part_1 = 0;
                part_2 = 0;
                break;
        }
        bonus = part_1 + part_2;
        cout << "The bonus is: " << bonus << endl;
        cout << "Please input the profit: ";
    }
    return 0;
}