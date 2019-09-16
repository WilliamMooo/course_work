#include <iostream>
#include <cstdlib>
#include <ctime> 
using namespace std;

int randomNum(int min, int max) {
    return rand()%(max-min)+min;
}

int main() { 
    srand((int)time(0));
    int arr[10],temp = 0;
    for (int i = 0; i < 10; i++) arr[i] = randomNum(-9,9); //产生-9-9的随机数放入数组
    cout << "The origin array is: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << '\t';
    cout << endl;
    for(int i = 0; i < 10; i++) { //选择排序
        for(int j = 9; j > i; j--){
            if (arr[j] < arr[i]) {
                temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
    }
    cout << "The sorted array is: ";
    for (int i = 0; i < 10; i++) cout << arr[i] << '\t';
    cout << endl;
    return 0;
}