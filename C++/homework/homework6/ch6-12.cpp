#include <iostream>
#include <cstring>
using namespace std;

const int counts = 10;

void sort(char *str[counts]) {
    char *temp = new char;
    for (int i = 0; i < counts; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(str[i], str[j]) < 0) {
                temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}

int main() {
    char *str[counts];
    cout << "Please input 10 strings:" << endl;
    for (int i = 0; i < counts; i++) {
        str[i] = new char;
        cout << "No." << i+1 << ": ";
        cin >> str[i];
    }
    sort(str);
    cout << "\nThe sorted strings(form small to large): \n";
    for (int i = 0; i < counts; i++) cout << str[i] << endl;
    return 0;
}