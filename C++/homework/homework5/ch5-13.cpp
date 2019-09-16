#include <iostream>
using namespace std;

int main() {
    char arr[20];
    cout << "Please input strings less than 20 in length:" << endl;
    while(cin >> arr){
        int length = 0;
        char temp;
        while (arr[length] != '\0') length++;
        for (int i = 0; i < length; i++){
            for (int j = i; j < length; j++) {
                if (arr[i] > arr[j]) {
                    temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        cout << "The sorted string is: " << arr << endl;
        cout << "Please input strings less than 20 in length:" << endl;
    }
    return 0;
}