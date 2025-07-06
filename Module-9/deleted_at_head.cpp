#include<bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *next;
    Node *prev;
    Node(int val)
    {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

void print_forwared(Node*  head){
    Node* temp = head;
    while (temp != NULL)
    {
       cout << temp->val << " ";
       temp = temp->next ;
    }
    cout << endl;
}

void delete_at_head(Node* &head, Node* &tail){
    Node * deletedNode = head;
    head = head->next;
    head->prev = NULL;
    delete deletedNode;
}

int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* tail = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = tail;
    tail->prev = a;

    delete_at_head(head, tail);
    print_forwared(head);
    return 0;
}