//
//  main.cpp
//  stack with linked list
//
//  Created by Ankit Garg on 15/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* next;

};

void push(Node* &top,int data)
{
    Node* temp=new Node;
    temp->data=data;
    temp->next=top;
    top=temp;
    
}

void pop(Node* &top)
{
    if (top ==NULL)
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        Node * ptr=top;
        top=ptr->next;
        delete ptr;
    }

}

void see_top(Node * top)
{
    if (top ==NULL)
    {
        cout<<"Stack is Empty!!";
    }
    else
    {
        cout<<top->data;
    }
    
    
    
}

void isempty(Node* top)
{
    if (top==NULL)
    {
        cout<<"True";
    }
    else
    {
    
    cout<<"False";
    }
    
    
}

void print_stack(Node* top)
{
    if (top==NULL)
    {
        return;
    }
    else
    {
        print_stack(top->next);
        cout<<top->data<<"  ";
        
    
    }
    
    
    
}



int main(int argc, const char * argv[]) {
    
    Node* top=NULL;  //head of the linked list
    
    
    
    while (true)
    {
        
        cout<<"\n1. push\n";
        cout<<"2. pop\n";
        cout<<"3. Top\n";
        cout<<"4. Is Empty\n";
        cout<<"5. Print Stack\n";
        
        cout<<"Enter choice:\n";
        int cho;
        cin>>cho;
        
        if (cho==1)
        {
            int data;
            cout<<"Enter data:";
            
            cin>>data;
            push(top,data);
        
        }
        else if (cho==2)
        {
            pop(top);
            
        }
        else if (cho==3)
        {
            see_top(top);
        
        }
        else if (cho==4)
        {
            isempty(top);
            
        }
        else if (cho==5)
        {
            if (top == NULL)
            {
                cout<<"stack is Empty!";}
            else
            {print_stack(top);}
            
        }
        else{
            break;
        }
    
    
    
    }
    
    
    return 0;
}
