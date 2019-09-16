#include <iostream>
using namespace std;

struct Node {
    int data;
    Node *next;
};

void create(Node *&head) {
    Node *newNode, *now;
    newNode = new Node;
    cout << "Please input the value of new node (press 0 to exit):" << endl;
    cin >> newNode->data;
    while (newNode->data != 0) {
        if (head == NULL) {
            head = newNode;
        } else {
            now->next = newNode;
            now = newNode;
            newNode = new Node;
            cin >> newNode->data;
        }
    }
    now->next = NULL;
    delete newNode;
}

void print(Node *&head) {
    cout << "Now the items of list are: " << '\n';
    while (head) {
        cout << head->data << endl;
        head = head->next;
    }
}

int main() {
    Node *head = NULL;
    create(head);
    print(head);
    system("pause");
    return 0;
}