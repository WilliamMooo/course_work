#include <iostream>
using namespace std;

class Time {
    void set_time(void);
    void show_time(void);
public:
    int hour;
    int minute;
    int second;
};

Time t;

int set_time(void);
int show_time(void);

int main() {
    set_time();
    show_time();
    return 0;
}

int set_time(void) {
    cin >> t.hour;
    cin >> t.minute;
    cin >> t.second;
}

int show_time(void) {
    cout << t.hour << ":" << t.minute << ":" << t.second << endl;
}