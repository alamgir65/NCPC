#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
        int val;
        Node* next;

   Node(int val)
   {
        this->val =val;
        this->next =NULL;
   }
};
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newnode = new Node(val);
    if(head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }
    Node* tmp = head;
    while(tmp->next != NULL)
    {
        tmp = tmp->next;
    }
    tmp->next = newnode;
    tail = newnode;
}

void print_linked_list(Node* head)
{
    Node* tmp = head;
    while(tmp != NULL)
    {
        cout <<tmp->val<<" ";
        tmp = tmp->next;
    }
    cout << endl;
}

void insert_at_head(Node* &head,int val)
{
    Node* newnode = new Node(val);
    newnode->next = head;
    head = newnode;
}
int get_size(Node* head)
{
    int size = 0;
    Node* tmp = head;
    while(tmp != NULL)
    {
        size++;
        tmp = tmp->next;
    }
    return size;
}
void delete_at_any_pos(Node*& head, int idx)
{
    if (head == NULL) return;

    if (idx < 0 || idx >= get_size(head)) {
        // cout << "Invalid index" << endl;
        return;
    }

    if (idx == 0) {
        Node* tmp = head;
        head = head->next;
        delete tmp;
        return;
    }

    Node* current = head;
    for(int i = 1; i < idx; i++) {
        current = current->next;
        // cout<<"Hello world"<<endl;

    }

    Node* to_delete = current->next;
    current->next = current->next->next;
    delete to_delete;
}
int main()
{
    Node* head = NULL;
    Node* tail = NULL;
    int t; cin >> t;
    while (t--) {
        int x, v; cin >> x >> v;
        // cout<<x<< " " << v << endl;
        if(x == 0){
            insert_at_head(head, v);
        }
        else if(x == 1){
            insert_at_tail(head, tail, v);
        }
        else if(x == 2){
            delete_at_any_pos(head, v);
        }
        print_linked_list(head);
    }

    return 0;
}