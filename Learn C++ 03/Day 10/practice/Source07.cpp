#include <iostream>
using namespace std;

struct List {
	struct Node{
		int val;
		Node* next = nullptr;
		Node* pre = nullptr;
	};
	Node* head = nullptr;
	Node* tail = nullptr;
};

void insert(List& list, int data) {
	List::Node* n = new List::Node;
	n->val = data;
	if (list.head == nullptr) {
		list.head = list.tail = n;
		return;
	}
	list.tail->next = n;
	n->pre = list.tail;

	list.tail = n;
}

void reverseList(List& list) {
	
	list.tail = list.head;
	List::Node* temp_pre = nullptr;
	List::Node* temp = list.head;
	while (temp){
		temp_pre = temp->pre;
		temp->pre = temp->next;
		temp->next = temp_pre;
		temp = temp->pre;
	}
	if(temp_pre != nullptr)
		list.head = temp_pre->pre;
}

void printList(List list) {
	List::Node* temp = list.head;
	while (temp)
	{
		cout << temp->val << " ";
		temp = temp->next;
	}cout << endl;

}

int main() {
	List list;
	int arr[] = { 1,2,3,4,5};
	int size = 5;
	for (int i = 0; i < size; i++) {
		insert(list, arr[i]);
	}

	printList(list);
	reverseList(list);
	printList(list);

}