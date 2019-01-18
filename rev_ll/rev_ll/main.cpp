//
//  main.cpp
//  reverse_linklist
//
//  Created by Ankit Garg on 12/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>

using namespace std;

struct Node
{
    int data;
    Node* next;
    
};

void reverse_ll(Node* &head)
{
    if (head==NULL)
    {
        cout<<"Empty list";
        
    }
    else
    {
        Node* previous =NULL;
        Node* current = head;
        Node* next1 = current->next;
        
        while (current->next!=NULL)
        {
            current->next=previous;
            previous=current;
            current=next1;
            
            next1=current->next;
            
        }
        current->next=previous;
        head=current;
        
        
    }
}

Node* reverse_rec(Node* head)
    {
        Node* ptr=head;
        if (ptr->next==NULL)
        {
            head=ptr;
            return head;
        }
        else
        {
            head=reverse_rec(ptr->next);
            (ptr->next)->next=ptr;
            ptr->next=NULL;
            
        }
        return head;
        
        
    
    }
    
    
    
    
    


void add_node(Node* &head,int data)
{
    
    Node* temp=new Node;
    temp->data=data;
    temp->next=NULL;
    
    
    if (head==NULL)
    {
        head=temp;
        
    }
    else
    {
        
        Node* ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        }
        
        ptr->next=temp;
        
    }
    
}

void print_ll(Node* head)
{
    
    if (head==NULL)
    {
        cout<<"Empty list";
    }
    else
    {
        Node* ptr=head;
        
        while (ptr->next!=NULL)
        {
            cout<<ptr->data<<"   ";
            ptr=ptr->next;
        }
        cout<<ptr->data<<"   ";
        
    }
    
}





int main(int argc, const char * argv[]) {
    
   Node* head=NULL;
 
    int n1;
    int data;
    cout<<"Enter length of list:";
    cin>>n1;
    cout<<"Enter Data:";
    for (int i=0;i<n1;i++)
    {
        cin>>data;
        add_node(head, data);
        
    }
    cout<<"Original Linked List:";
    print_ll(head);
    cout<<endl;
    
    head=reverse_rec(head);
    cout<<"Reversed Linked List:";
    print_ll(head);
    cout<<endl;
    
    
    
    return 0;
}
