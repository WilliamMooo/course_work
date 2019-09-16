#include <iostream>
using namespace std;

void hanoi(char origin, char middle, char target, int n) {
    if (n == 1) {
        cout << origin << "-->" << target << endl; //只有一个盘子，直接从origin移到target
    } else {
        hanoi(origin, target, middle, n - 1); //先把origin的n - 1个盘子移到middle
        cout << origin << "-->" << target << endl; //把origin剩下的一个移到target
        hanoi(middle, origin, target, n - 1); //把middle的n - 1个盘子移到target
    }
}

int main() {
    int n;
    char A_pillar = 'A', B_pillar = 'B', C_pillar = 'C';
    while(cin >> n){
        hanoi(A_pillar, B_pillar, C_pillar, n);
    }
    return 0;
}