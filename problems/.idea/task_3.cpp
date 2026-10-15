#include <iostream>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    
    Node() {
        value = 0;
        next = NULL;
    }
    
    Node(int v) {
        this->value = v;
        this->next = NULL;
    }
};

class LinkedList {
    Node *head;
public:
    LinkedList() { head = NULL; }

    bool insert(int value) {
        Node *newNode = new Node(value);
        if (head == NULL) {
            head = newNode;
            return true;
        }
        Node *tmp = head;
        while (tmp->next != NULL) {
            tmp = tmp->next;
        }
        tmp->next = newNode;
        return true;
    }

    // دالة البحث المطلوبة في التاسك
    bool find(Node *start, int Value) {
        Node *tmp = start;
        while (tmp != NULL) {
            if (tmp->value == Value) {
                return true;
            }
            tmp = tmp->next;
        }
        return false;
    }

    Node *Head() { 
        return head; 
    }
};

int main() {
    LinkedList ll;
    ll.insert(56);
    ll.insert(23);
    ll.insert(4);
    ll.insert(2);
    
    if (ll.find(ll.Head(), 23)) {
        cout << "found" << endl;
    } else {
        cout << "Not found" << endl;
    }
    
    return 0;
}