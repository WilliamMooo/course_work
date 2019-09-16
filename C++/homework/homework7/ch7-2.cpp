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

int days(int year, int month, int day) {
    int count = day;
    int monthDay[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (isLeapYear(year)) monthDay[1] = 29;
    if (month > 1) for (int i = 0; i < month-1; i++) count += monthDay[i];
    return count;
}

int main() {
    cout << "Year: ";
    cin >> date.year;
    cout << "Month: ";
    cin >> date.month;
    cout << "Day: ";
    cin >> date.day;
    cout << "It's No." << days(date.year, date.month, date.day) << " day of the year." << endl;
    return 0;
}