// 学号：201730940431
// 班级：18信计
// 姓名：莫一凡
// 实验题1：实现顺序表的各种基本运算的算法
// 代码链接：https://github.com/WilliamMooo/course_work/blob/master/data_structure/homework-1/src/exp2-1.cpp
#include <iostream>

using namespace std;

#define MaxSize 50

typedef char ElemType;

typedef struct {
    ElemType data[MaxSize];
    int length;
} SqList;

//初始化顺序表
void initList(SqList* &L) {
    L = (SqList*)malloc(sizeof(SqList));
    L->length = 0;
}

//销毁顺序表
void destoryList(SqList* &L) {
    free(L);
}

//判断信息表是否为空
bool isEmpty(SqList* &L) {
    return (L->length == 0);
}

//返回线性表长度
int listLength(SqList* &L) {
    return L->length;
}

//输出线性表
void display(SqList* &L) {
    cout << "L: ";
    for(int i = 0; i < listLength(L); i++) cout << L->data[i] << " ";
    cout << endl;
}

//返回线性表中第i个元素
ElemType getElem(SqList* &L, int i) {
    if (i<1 || i>L->length) return false;
    return L->data[i-1];
}

//按元素值查找
int locElem(SqList* &L, ElemType e) {
    int i = 0;
    while (i < L->length && L->data[i] != e) i++;
    if (i >= L->length) return 0;
    else return i+1;
}

//在第i个位置上插入元素e
bool listInsert(SqList* &L, int i, ElemType e) {
    if (i<1 || i>L->length+1) return false;
    L->length++;
    for (int j = L->length; j >= i; j--) L->data[j] = L->data[j-1];
    L->data[i-1] = e;
    return true;
}

//删除数据元素
bool listDel(SqList* &L, int i) {
    if(i<1 || i>L->length) return false;
    for (int j = i-1; j < L->length-1; j++) L->data[j] = L->data[j+1];
    L->length--;
    return true;
}

int main() {
    SqList *L;
    //(1)初始化顺序表L
    initList(L);
    cout << "Initialize the sequence list L" << endl;
    
    //(2)依次插入a、b、c、d、e元素
    listInsert(L, 1, 'a');
    listInsert(L, 2, 'b');
    listInsert(L, 3, 'c');
    listInsert(L, 4, 'd');
    listInsert(L, 5, 'e');
    cout << "Insert element a, b, c, d, e to L" << endl;

    //(3)输出顺序表L
    display(L);

    //(4)输出顺序表L的长度
    cout << "The length of L is: " << listLength(L) << endl;

    //(5)判断顺序表L是否为空
    if (isEmpty(L)) cout << "L is empty" << endl;
    else cout << "L is not empty" << endl;

    //(6)输出顺序表L的第3个元素
    cout << "The third element of L is: " << getElem(L, 3) << endl;

    //(7)输出元素a的位置
    cout << "The location of element 'a' is: " << locElem(L, 'a') << endl;

    //(8)在第4个元素位置上插入f元素
    listInsert(L, 4, 'f');

    //(9)输出顺序表L
    display(L);

    //(10)删除顺序表L的第3个元素
    listDel(L, 3);

    //(11)输出顺序表
    display(L);

    //(12)释放顺序表
    destoryList(L);

    system("pause");
    return 0;
}