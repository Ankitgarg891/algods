//
//  main.cpp
//  Sorting a linked list
//
//  Created by Ankit Garg on 17/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

struct node {

    int data;
    node* next;
};

node* new_node(int value)
{
    node* temp=new node;
    temp->data=value;
    temp->next=NULL;
    return temp;
    
}

void insert_node(node* &head,int value)
{
    if (head==NULL)
    {
        head=new_node(value);
    }
    
    else
    {
        node* ptr=head;
        while(ptr->next!=NULL)
        {
            ptr=ptr->next;
            
        }
        ptr->next=new_node(value);
    }
}

void print_ll(node* head)
{
    if (head==NULL)
    {
        cout<<"List is Empty";
    }
    else
    {
        node* ptr=head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }
}

int len_list(node* head)
{
    node* ptr=head;
    int len=0;
    while (ptr!=NULL)
    {
        ptr=ptr->next;
        len++;
        
    }
    return len;
}
void bubble_sort(node* &head)
{
    int n=len_list(head);
    
    
    for(int i=0;i<n;i++)
    {
    
    node* ptr2=head->next;
    node* ptr1=head;
    node* ptr=head;
  
    for(int j=0;j<n-1;j++)
    {
        //j++;
        
        if (ptr1==head)
        {
            if (head->data>ptr2->data)
            {
            head=ptr2;
            node *temp= ptr2->next;
            ptr2->next=ptr1;
            ptr1->next=temp;
            ptr=head;
            }
            ptr1=ptr->next;
            ptr2=ptr1->next;
        }
        else
        {
            
            if (ptr1->data > ptr2->data)
            {
                ptr->next=ptr2;
                node* temp= ptr2->next;
                ptr2->next=ptr1;
                ptr1->next=temp;
                
                
            }
            ptr=ptr->next;
            ptr1=ptr->next;
            ptr2=ptr1->next;
            
        }
       // cout<<"\nlist after:";
        //cout<<""<<i<<"  "<<j<<endl;
        
        
       // print_ll(head);
        
    }
        
    }
    
}

void absolute_sort(node* &head)
{
    node* ptr=head->next;
    node* temp;
    node* pre=head;
    
    while(ptr!=NULL)
    {
    
        if (ptr->data<0)
            {
                pre->next=ptr->next;
                
                temp=ptr;
                ptr=ptr->next;
                temp->next=head;
                head=temp;
            }
        else
        {
            pre=pre->next;
            ptr=ptr->next;
        }
    }
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    cout<<"Enter no of elements:";
    int n;
    cin>>n;
     node* head=NULL;
    
    for (int i=0;i<n;i++)
    {
    int value;
    cin>>value;
    insert_node(head,value);
    }
    
    cout<<"Original Linked List:"<<endl;
    print_ll(head);
    
   
    //cout<<"\nsort Linked List:"<<endl;
    // bubble_sort(head);
   
   
    cout<<"\nsort Linked List:"<<endl;
    absolute_sort(head);
    print_ll(head);
    cout<<endl;
    
    
    
    
    
    return 0;
}

