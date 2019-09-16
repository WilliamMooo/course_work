#include <iostream>
using namespace std;

//作业 第二章 5、6、7
void fifth() {
    //5.写出下列表达式的值
    cout << 3.5*3 + 2*7 - 'a' << endl;//10.5+14-97=-72.5
    cout << 26/3 + 34%3 + 2.5 << endl;//8+1+2.5=11.5
    cout << 45/2 + (int)3.14159/2 << endl;//22+1=23
    int a = 3, b, c;
    a = b = (c = a += 6);
    cout << a << endl;//9
    // a = 3*5, a = b =3*2;
    int a1 = 3, b1;
    cout << (int)(a1 + 6.5) % 2 + (a1 = b1 = 5) << endl;//1+5=6
    float x2 = 2.5, y2 = 4.7;
    int a2 = 7;
    cout << x2 + a2%3 * (int)(x2 + y2)%2/4 << endl;//2.5+2.5*0=2.5
    int a3 = 2, b3 = 3;
    float x3 = 3.5, y3 = 2.5;
    cout << (float)(a3 + b3)/2 + (int)x3%(int)y3 << endl;//2.5+1=3.5
}

void sixth() {
    int n = 5, a = 12;
    a += a;
    cout << a << endl;//24
    a = 12;
    a -= 3;
    cout << a << endl;//9
    a = 12;
    a *= 2 + 3;
    cout << a << endl;//60
    a = 12;
    a /= a + a;
    cout << a << endl;//0
    a = 12;
    a %= (n %= 2);
    cout << a << endl;//0
    a = 12;
    a += a -=a *= a;//0
    cout << a << endl;
}

void seventh() {
    int i, j, m, n;
    i = 8;
    j = 10;
    m = ++i + j++;
    n = (++i) + (++j) + m;
    cout << i << '\t' << j << '\t' << m << '\t' << n << endl;
    //10    12    19    41
}

int main() {
    fifth();
    sixth();
    seventh();
    return 0;
}