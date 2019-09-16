#include <iostream>
#include <cstring>
using namespace std;

const int counts = 10;
char str[counts][20];

void sort() {
    char *temp = new char;
    for (int i = 0; i < counts; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(str[i], str[j]) < 0) {
                strcpy(temp,str[i]);
                strcpy(str[i],str[j]);
                strcpy(str[j],temp);
            }
        }
    }
}

int main() {
    cout << "Please input 10 strings(no more than 20 characters):" << endl;
    for (int i = 0; i < counts; i++) {
        cout << "No." << i+1 << ": ";
        cin >> str[i];
    }
    sort();
    cout << "\nThe sorted strings(form small to large): \n";
    for (int i = 0; i < counts; i++) cout << str[i] << endl;
    return 0;
}