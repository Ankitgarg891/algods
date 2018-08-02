//
//  main.cpp
//  link list
//
//  Created by Ankit Garg on 01/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

struct node{
    
    int data;
    node* next;
    
};


void insert_back(node* &head,int n1)
{
    if (head == NULL)
    {
        node* temp= new node;
        
        temp->data=n1;
        temp->next=NULL;
        head=temp;
        
    }
    
    else
    {
        node* ptr;
        ptr=head;
        
        while (ptr->next!= NULL)
        {
            ptr=ptr->next;
        }
        node* temp=new node;
        
        temp->data=n1;
        temp->next=NULL;
        ptr->next=temp;
        
        
        
    }
    
    
    
    
    
}

void insert_front(node* &head,int data)
{
    node* temp=new node;
    temp->data=data;
    temp->next=head;
    head=temp;
}

void insert_nth(node* &head,int data,int pos)
{
    node* temp=new node;
    temp->data=data;
    
    if (pos==0)
    {
        temp->next=head;
        head=temp;
    }
    else
    {
        int flag=0;
        node* ptr=head;
        for (int i=0;i<pos-1;i++)
        {
            if (ptr->next==NULL)
            {
                flag=1;
                break;
                
            }
            
            ptr=ptr->next;
        }
        //(ptr-1)->next=temp;
        //temp->next=ptr;
        if (flag==0)
        {
            
            temp->next=ptr->next;
            ptr->next=temp;
        }
        else
        {
            cout<<"Postion out of index";
        }
        
        
        
    }
    
    
}


void print_ll(node* &head)
{
    cout<<"\nPrinting linked list:";
    
    if (head==NULL)
    {
        cout<<"Linked List is empty!";
    }
    else
    {
        node* ptr=head;
        while (ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->next;
        }
        
    }
    
}


void print_reverse(node * head)
{
    if (head==NULL)
    {
        return;
    }
    else{
        
        node* ptr=head;
        
        print_reverse(ptr->next);
        cout<<ptr->data<<"  ";
    }
    
}

void delete_nth(node * &head, int pos)
{
    node* ptr=head;
    if (pos==0 || ptr==NULL){
        if ( ptr!=NULL){
            head=ptr->next;
            delete ptr;}
    }
    
    
    
    
    
    else{
        int ctr=0;
        int flag=0;
        while (ctr!=pos-1){
            ctr++;
            if(ptr->next!=NULL){
                ptr=ptr->next;
            }
            else{
                flag=1;
                break;
            }
        }
        
        if (flag==1){
            cout<<"Index out of list";
            }
        else
        {
            if ((ptr->next) -> next != NULL)
            {
                ptr->next=(ptr->next) -> next;
                delete ptr->next;
            }
            
            else
            {
                if (ptr->next!=NULL)
                {
                    delete ptr->next;
                }
                ptr->next=NULL;
                
            }
            
        }
        
        
        
    }
    
    
    
}




int main(int argc, const char * argv[]) {
    
    node* head=NULL;
    
    int cho=1;
    
    while (cho!=0)
    {
        
        cout<<"\n\nMenu:";
        cout<<"\n0 - Exit";
        cout<<"\n1 - Printing Linked List";
        cout<<"\n2 - Insert new node at back";
        cout<<"\n3 - Insert Front";
        cout<<"\n4 - Insert nth";
        cout<<"\n5 - Delete a node at nth position";
        cout<<"\n6 - Reverse Printing Linked List";
        
        
        
        
        cout<<"\n\nEnter your choice: ";
        cin>>cho;
        if (cho==2)
        {
            int n1;
            cout<<"\nEnter data:";
            cin>>n1;
            insert_back(head,n1);
        }
        
        else if (cho==1)
        {
            print_ll(head);
        }
        
        else if (cho==3)
        {
            int n1;
            cout<<"\nEnter data:";
            cin>>n1;
            insert_front(head,n1);
        }
        else if (cho==4)
        {
            int data,pos;
            cout<<"\nEnter data:";
            cin>>data;
            cout<<"\nEnter position:";
            cin>>pos;
            insert_nth(head, data, pos);
            
        }
        
        else if (cho==5)
        {   int pos;
            cout<<"\nEnter position:";
            cin>>pos;
            delete_nth(head,pos);
            
            
        }
        
        else if (cho==6)
        {
            print_reverse(head);
        }
        
        
    }
    
    
    
    
    
    
    
    
    
    
    
    return 0;
}
