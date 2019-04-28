#include <iostream>
using namespace std;
struct Node
{
    int data;
    Node* next;
};


Node* add_ele(int data,Node* head)
{
    
    Node* temp= new Node;
    temp->next  = NULL;
    temp->data = data;
    
    if (head==NULL)
    {
        head=temp;
        return head;
    }
    
    Node* ptr= head;
    while (ptr->next!=NULL)
    {
        ptr=ptr->next;
        
    }
    ptr->next=temp;
    
    
    return head;
    
    
    
}

void print_ll(Node* head)
{
    Node* ptr=head;
    while (ptr!=NULL)
    {
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    
    cout<<"NULL"<<endl;
    
    return;
    
    
}

Node* reverse_ll(Node* head)
{
    if (head==NULL ) return head;
    if ( head->next==NULL ) return head;
    
    Node* pre=head;
    Node* curr=head->next;
    Node* nex;
    head->next=NULL;
    while ((curr->next)!= NULL)
    {
        nex=curr->next;
        curr->next=pre;
        pre=curr;
        curr=nex;
    }
    curr->next=pre;
    head=curr;
    return  head;
}



int main()
{
    Node* head = NULL;
    
    for (int i=0;i<5;i++)
    {
        int n;
        cout<<"\nenter:";
        cin>>n;
        
        head=add_ele(n,head);
    }
    
    
    print_ll(head);
    
    cout<<"reverse:";
    
    head=reverse_ll(head);
    
    
    print_ll(head);
    
    
    
    
}
