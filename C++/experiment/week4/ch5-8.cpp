#include <iostream>
using namespace std;

void sort(int arr[]) {
    int temp = 0;
    for (int i = 0; i < 15; i++) {
        for (int j = i; j < 15; j++) {
            if (arr[i] > arr[j]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
}


int main() {
    int arr[15] = {15,14,13,12,11,10,9,8,7,6,5,4,3,2,1};
    int num = 0;
    sort(arr); //转换成从小到大排序
    cout << "Please input an integer between 1 and 15: " << endl;
    while(cin >> num) {
        if (num < 1 || num > 15) cout << "This number is not in the array!" << endl;
        else {
            int max = 15, min = 0, mid = 7;
            while(num != arr[mid]) {
                mid = (max+min)/2;
                if (num > arr[mid]) min = mid;
                else max = mid;
            }
            cout << "The number's position in the origin array is: " << 15-mid << endl;
        }
    }
    return 0;
}