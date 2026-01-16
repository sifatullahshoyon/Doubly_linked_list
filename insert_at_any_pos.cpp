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
// insert at any position
void insert_at_any_pos(Node* head, int idx, int val)
{
    Node* newNode = new Node(val);
    Node* tmp = head;
    for(int i=1; i<idx; i++)
    {
        tmp = tmp->next;
    }
    newNode->next = tmp->next;
    tmp->next->prev = newNode;
    tmp->next = newNode;
    newNode->prev = tmp;
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

    insert_at_any_pos(head, 2, 100);
    insert_at_any_pos(head, 1, 500);
    // print
    print_forward(head);

    return 0;
}