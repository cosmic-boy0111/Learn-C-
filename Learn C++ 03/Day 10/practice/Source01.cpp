#include <crtdbg.h>
#include <iostream>
using namespace std;


struct List{
    struct Node {
        int val;
        Node* next = nullptr;
    };
    Node* head;
    Node* tail;
};

void CreateList(List& list) {
    list.head = nullptr;
    list.tail = nullptr;
}

void PushBack(List& list,int data) {
    List::Node* n = new List::Node;
    n->val = data;
    if (list.head == nullptr) {
        list.head = list.tail = n;
        return;
    }

    list.tail->next = n;
    list.tail = n;
}

void PrintList(List list) {
    List::Node* temp = list.head;
    while (temp) {
        cout << temp->val << " ";
        temp = temp->next;
    }cout << endl;
}

void DeleteList(List& list) {
    List::Node* temp = list.head;

    while (temp){
        List::Node* next_temp = temp->next;
        delete temp;
        temp = next_temp;
    }

    delete temp;
    temp = nullptr;
    list.head = nullptr;
    list.tail = nullptr;
}


int main() {
    int n[]{ 5, 3, 2, -1, 4, 2, 7, 9, 5, 3 };
    List list;
    CreateList(list); // CreateList initializes the list object
    for (int i = 0; i < sizeof(n) / sizeof(int); ++i) {
        PushBack(list, n[i]); // PushBack places item at the of the list
    }
    PrintList(list); // prints items in the list
    DeleteList(list); // DeleteList releases all the node stored in list
    _CrtDumpMemoryLeaks(); // this function shouldn’t report memory leakage
}
