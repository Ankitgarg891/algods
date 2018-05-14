//
//  main.cpp
//  Doubly linked list
//
//  Created by Ankit Garg on 12/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node
{
    Node* previous;
    int data;
    Node* next;

};


void print_ll(Node* head)
{
    if (head==NULL)
    {return;
    }
    else{
        
        Node* ptr=head;
        while (ptr!=NULL)
            {   cout<<ptr->previous<<"  ";
                cout<<ptr->data<<"  ";
                cout<<ptr->next<<"  \n";
               
                
                ptr=ptr->next;
                
            }
        

        }


}
void add_node(Node* &head,int data)
{
    Node* temp=new Node;
    temp->next=NULL;
    temp->data=data;
    
    
    
    if (head==NULL)
    {
        temp->previous=NULL;
        head=temp;
        
    }
    else
    {
        Node* ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        
        }
        temp->previous=ptr;
        ptr->next=temp;
        
        
    }



}


void insert_front(Node* &head, int data )
{
    Node* temp=new Node;
    temp->previous=NULL;
    (*temp).data=data;
    
    if (head==NULL)
    {
        head=temp;        temp->next=NULL;
        
        
    }

    else
    {
        Node* ptr=head;
        ptr->previous=temp;
        head=temp;
        temp->next=ptr;
   }



}

void insert_nth(Node *&head,int data,int position)

{
    if (head==NULL && position!=0)
    {return;}
    if (position==0)
    {
        insert_front(head, data);
    }
    else
    {
        Node* temp=new Node;
        temp->data=data;
        
        Node* ptr=head;
        int ctr=0;
        
        while (ctr<position-1 && ptr->next!=NULL)
            {
            ptr=ptr->next;
            ctr++;
            }
        if (ptr->next==NULL)
        {
            add_node(head, data);
        }
        else
        { temp->previous=ptr;
        temp->next=ptr->next;
        
        (ptr->next)->previous=temp;
        ptr->next=temp;
        }
    }
}




void delete_nth(Node* &head,int position)
{
    if (head==NULL)
    {
        return;
    }
    Node* ptr=head;
    if (ptr->next==NULL )
    {
        if (position==0)
        {
            delete ptr;
            head=NULL;
        }
        else
        {
            return;}
    }
    
    else
    {
        for (int i=0;i<position && ptr!=NULL;i++)
        {
            ptr=ptr->next;
        
        }
        if (ptr==NULL)
        {
            return;
        }
        else
        {
            
            if (ptr->next==NULL)
            {
                (ptr->previous)->next=NULL;
                delete ptr;
            
            }
            
            else
            {
                (ptr->previous)->next=ptr->next;
                (ptr->next)->previous=ptr->previous;
                delete ptr;
            
            
            }
        }
  }

}


void print_reverse(Node* & head)
{
    if (head==NULL)
    {
    return;
    }
    
    else
    {
        Node* ptr=head;
        while (ptr->next!=NULL)
        {
            ptr=ptr->next;
        
        }
        
        while (ptr!=NULL)
        {
            cout<<ptr->data<<"  ";
            ptr=ptr->previous;
        
        }
        
    
    }
    
    


}


void print_reverse_recursion(Node *ptr)
{
    
    if (ptr==NULL)
    {
        return;
    }
    else
    {
        
        print_reverse_recursion(ptr->next);
        cout<<ptr->data<<"  ";
    }


}

void reverse_dll(Node* &head)
{
    if (head==NULL)
    {
    return;}
    
    else
    {
        Node * ptr=head;
        Node*temp;
        while (ptr!=NULL)
        {
            temp=ptr->next;
            ptr->next=ptr->previous;
            ptr->previous=temp;
            if (ptr->previous==NULL)
            {
                head=ptr;
            }
            ptr=ptr->previous;
        }
    }
}


Node* reverse_recursion(Node* head)
{
    Node* ptr=head;
    if (ptr->next==NULL)
    {
        head=ptr;
        
        Node* temp=ptr->next;
        ptr->next=ptr->previous;
        ptr->previous=temp;
        
        
        return head;
    }
    else {
        Node* temp=ptr->next;
        ptr->next=ptr->previous;
        ptr->previous=temp;
        head=reverse_recursion(ptr->previous);
        
    }
    return head;
    
    
    

    

}



int main(int argc, const char * argv[])
{
    
    
    Node* head=NULL;
    int cho=1;
    while (cho!=0)
    {   cout<<"\n\nMenu for Doubly Linked List:";
        cout<<"\n0 - To exit";
        cout<<"\n1 - Printing Doubly Linked List";
        cout<<"\n2 - Insert new node at back";
        cout<<"\n3 - Insert Front";
        cout<<"\n4 - Insert nth";
        cout<<"\n5 - Delete a node at nth position";
        cout<<"\n6 - Reverse Printing Linked List";
        cout<<"\n7 - Reverse Printing Linked List by Recursion";
        cout<<"\n8 - Reverse Doubly Linked List";
        cout<<"\n9 - Reverse Doubly Linked List by Recursion";
        cout<<"\n\nEnter your choice: ";
        cin>>cho;
        if (cho==2)
        {
            int n1;
            cout<<"\nEnter data:";
            cin>>n1;
            add_node(head,n1);
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
        else if (cho==7)
        {
            print_reverse_recursion(head);
        
        }
        
        else if (cho==8)
        {
            reverse_dll(head);
            
        }
        
        else if (cho==9)
        {
            head=reverse_recursion(head);
            
        }
        
        
        
        
    }
    
    return 0;
}
