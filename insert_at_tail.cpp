#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;
        Node* prev;
    // Constructor
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forward(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout << tmp->val << " ";
        tmp = tmp->next;
    }
    cout << endl;
}
// insert at tail
void insert_at_tail(Node* &head, Node* &tail, int val)
{
    Node* newNode = new Node(val);
    if(head == NULL)
    {
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

int main(){
    // Node* head = NULL;
    // Node* tail = NULL;
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);
    // Connection
    head->next = a;
    a->prev = head;

    a->next = b;
    b->prev = a;

    b->next = tail;
    tail->prev = b;

    insert_at_tail(head, tail, 250);
    insert_at_tail(head, tail, 30);
    // print
    print_forward(head);

    return 0;
}