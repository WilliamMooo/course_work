#include <iostream>

using namespace std;

#define maxSize 50

typedef char ElemType;

typedef struct {
    ElemType data[maxSize];
    int top;
} sqStack;

// 初始化栈
void initStack(sqStack* &s) {
    s = (sqStack*)malloc(sizeof(sqStack));
    s->top = -1;
}

// 销毁栈
void destoryStack(sqStack* &s) {
    free(s);
}

// 判断栈是否为空
bool stackEmpty(sqStack* s) {
    return (s->top == 0);
}
// 进栈
bool push(sqStack* &s, ElemType e) {
    if (s->top == -1) {
        return false;
    } else {
        s->top += 1;
        s->data[s->top] = e;
        return true;
    }
}

// 出栈
bool pop(sqStack* &s, ElemType &e) {
    if (s->top == -1) return false;
    e = s->data[s->top];
    s->top -= 1;
    return true;
}

// 取栈顶元素
bool getTopElem(sqStack* &s, ElemType e) {
    if (s->top == -1) return false;
    e = s->data[s->top];
    return true;
}

// 例3.4 判断str是否为对称串
bool isSymStr(ElemType str[]) {
    ElemType e;
    sqStack* st;
    initStack(st);
    for (int i = 0; str[i] != '\0'; i++) push(st, str[i]);
    for (int i = 0; str[i] != '\0'; i++) {
        pop(st, e);
        cout << e << endl;
        if (str[i] != e) {
            cout << str[i] << e << endl;
            destoryStack(st);
            return false;
        }
    }
    destoryStack(st);
    return true;
}

int main() {
    char str[10];
    cin >> str;
    if (isSymStr(str)) {
        cout << "true";
    } else {
        cout << "false";
    }
    return 0;
}