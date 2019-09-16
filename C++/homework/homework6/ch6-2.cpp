#include <iostream>
#include <cstring>
using namespace std;

int main() {
    char *str1 = new char, *str2 = new char, *str3 = new char;
    cout << "Please inupt 3 strings:" << endl;
    cin >> str1;
    cin >> str2;
    cin >> str3;
    char *arr[] = {str1, str2, str3}, *temp = new char;
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < i; j++) {
            if (strcmp(arr[i], arr[j]) < 0) {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    cout << "Result:"<< endl;
    for (int i = 0; i < 3; i++) cout << arr[i] << endl;
    return 0;
}