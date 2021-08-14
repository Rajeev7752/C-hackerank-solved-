#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void push(node* &head,int val)
{
    node* new1=new node(val);
    new1->data=val;
    new1->next=head;
    head=new1;
}
void print(node* head)
{   node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"  ";
        temp=temp->next;
    }
}
int main()
{
    node* head=NULL;
    push(head,1);
    push(head,2);
    push(head,3);
    push(head,4);
    push(head,5);
    print(head);
    return 0;
} 