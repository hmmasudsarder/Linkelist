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
void insert_at_head(Node* &head, int val){
    Node* newnode = new Node(val);
    newnode->next = head;
    head->prev = newnode;
    head = newnode;
}
int main()
{
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    insert_at_head(head, 100);
    print_forwared(head);
    return 0;
}