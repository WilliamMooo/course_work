#include <iostream>
using namespace std;

int length(char *str) {
    int count = 0;
    char *p;
    p = str;
    while (*p != '\0') {
        p++;
        count++;
    }
    return count;
}

int main() {
	char *str = new char;
    cout << "Please input a string:" << endl;
    while (cin >> str) {
        cout << "The length of string is: " << length(str) << endl;
        cout << "\nPlease input a string:" << endl;
    }
	return 0;
}