#include <iostream>

using namespace std;

typedef char ElemType;

typedef struct LNode {
    ElemType data;
    struct LNode *next;
} linkNode;

//初始化单链表节点
void initListNode(linkNode* &h) {
    h = (linkNode*)malloc(sizeof(linkNode));
    h->data = '\0';
    h->next = NULL;
}

//删除单链表
void destoryList(linkNode* &h) {
    while (h->next != NULL) {
        linkNode *p = h;
        h = h->next;
        free(p);
    }
}

//尾插法向链表h插入元素
void listInsertRear(linkNode* &h, ElemType e) {
    if (h->data == '\0') {
        h->data = e;
    } else {
        linkNode *p = h;
        while (p->next != NULL) p = p->next;
        linkNode *nextNode;
        initListNode(nextNode);
        p->next = nextNode;
        nextNode->data = e;
    }
}

//输出链表h
void display(linkNode* &h) {
    cout << "h: ";
    linkNode *p = h;
    while (p->next != NULL) {
        cout << p->data << " ";
        p = p->next;
    }
    cout << p->data << endl;
}

//输出链表长度
int listLength(linkNode* &h) {
    if (h->data == '\0') {
        return 0;
    } else {
        int count = 1;
        linkNode *p = h;
        while (p->next != NULL) {
            p = p->next;
            count++;
        }
        return count;
    }
}

//判断链表是否为空
bool isEmpty(linkNode* &h) {
    return (h->data == '\0');
}

//获取链表第i个元素
ElemType getElem(linkNode* &h, int i) {
    int len = listLength(h);
    if (i>0 && i<=len) {
        linkNode *p = h;
        for (int j = 0; j < i-1; j++) p = p->next;
        return p->data;
    } else {
        return false;
    }
}

//找到元素e在链表中的位置
int locElem(linkNode* &h, ElemType e) {
    linkNode *p = h;
    int count = 1;
    while (p->next != NULL) {
        if (p->data == e) return count;
        count++;
        p = p->next;
    }
    return 0;
}

//向链表第i个元素位置上插入元素
bool listInsert(linkNode* &h, int i, ElemType e) {
    int len = listLength(h);
    if (i>0 && i<=len) {
        linkNode *p = h;
        for (int j = 0; j < i-1; j++) p = p->next;
        linkNode *pOriNext = p->next;
        linkNode *newNode;
        initListNode(newNode);
        newNode->data = e;
        p->next = newNode;
        newNode->next = pOriNext;
        return true;
    } else {
        return false;
    }
}

//删除链表第i个元素
bool delEle(linkNode* &h, int i) {
    int len = listLength(h);
    if (i>0 && i<len) {
        linkNode *p = h;
        for (int j = 0; j < i-2; j++) p = p->next;
        linkNode *delElem = p->next;
        p->next = delElem->next;
        free(delElem);
        return true;
    } else if (i == len) {
        linkNode *p = h;
        for (int j = 0; j < i; j++) p = p->next;
        linkNode *delElem = p->next;
        p->next = NULL;
        free(delElem);
        return true;
    } else {
        return false;
    }
}

int main() {
    // (1)初始化单链表h
    linkNode *h;
    initListNode(h);
    cout << "Initialize the link list h" << endl;

    // (2)依次采用尾插法插入a、b、c、d、e元素
    listInsertRear(h, 'a');
    listInsertRear(h, 'b');
    listInsertRear(h, 'c');
    listInsertRear(h, 'd');
    listInsertRear(h, 'e');
    cout << "Insert element a, b, c, d, e to h" << endl;

    // (3)输出单链表h
    display(h);

    // (4)输出单链表的长度
    cout << "The length of h is: " << listLength(h) << endl;


    // (5)判断单链表h是否为空
    if (isEmpty(h)) cout << "h is empty" << endl;
    else cout << "h is not empty" << endl;
    
    // (6)输出单链表h的第3个元素
    cout << "The third element of h is: " << getElem(h, 3) << endl;

    // (7)输出元素a的位置
    cout << "The location of element 'a' is: " << locElem(h, 'a') << endl;

    // (8)在第4个元素位置上插入f元素
    listInsert(h, 4, 'f');

    // (9)输出单链表h
    display(h);

    // (10)删除单链表h的第3个元素
    delEle(h, 3);

    // (11)输出单链表h
    display(h);

    // (12)释放单链表
    destoryList(h);

    system("pause");
    return 0;
}