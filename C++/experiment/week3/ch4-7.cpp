#include <iostream>
using namespace std;

bool prime(int n) {
    bool flag = true;
    for (int i = 2; i < n/2 + 1; i++) {
        if (n%i == 0) flag = false;
    }
    return flag;
}

void gotbaha(int n) {
    for (int i = 3; i < n; i += 2) {
        if(prime(i) && prime(n-i)) {
            cout << n << " =" << i << " + " << n-i << endl;
            break;
        }
    }
}

int main() {
    int n;
    cout << "Please input an even not less than 6: ";
    while(cin >> n){
        if (n >= 6) gotbaha(n);
        else cout << "invaild value!" <<endl;
    }
    return 0;
}