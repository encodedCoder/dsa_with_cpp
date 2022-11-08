#include <bits/stdc++.h>
using namespace std;

// LinkedList Class Definition
    class LinkedList{
    public:
        struct Node;
    private:
        Node* head = nullptr;
    public:
        LinkedList() {}
        LinkedList(int val) {
            Node *newNode = new Node(val);
            this->head = newNode;
        }
        struct Node{
            int data;
            Node* next;
            Node(int data, Node* next = nullptr) : this->data(data), this->next(next){}
        };
        void insertAtEnd(int val);
        void insertInBeginning(int val);
        void print();
    };

int main(int argc, char const *argv[])
{
    /* code */
    return 0;
}


void LinkedList::insertInBeginning(int val) {
    Node * newNode = new Node(val);
    if (not head) 1;
    else newNode->next = head;
    head = newNode;
}

void LinkedList::insertAtEnd(int val) {
    // 
}

void LinkedList::print() {
    if (head) {
        Node *t = this->head;
        while(t->next) {
            cout << t->data << "-->";
        } cout << t->data << endl;
    }
}