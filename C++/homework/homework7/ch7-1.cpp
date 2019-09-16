#include <iostream>
using namespace std;

struct Date {
    int year;
    int month;
    int day;
}date;

bool isLeapYear(int year) {
    if ((year%4 == 0 && year%100 != 0) || year % 400 == 0) return true;
    else return false;
}

int main() {
    cout << "Year: ";
    cin >> date.year;
    cout << "Month: ";
    cin >> date.month;
    cout << "Day: ";
    cin >> date.day;
    int count = date.day;
    int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(date.year)) monthDay[1] = 29;
    if (date.month > 1) for (int i = 0; i < date.month-1; i++) count += monthDay[i];
    cout << "It's No." << count << " day of the year." << endl;
    return 0;
}