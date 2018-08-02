//
//  main.cpp
//  stack with array
//
//  Created by Ankit Garg on 15/05/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;




int main(int argc, const char * argv[])
{
    int n;
    cout<<"Enter the size of stack:";
    cin>>n;
    int arr[n];
    int top=-1;
    
    while (true)
    {
        
        cout<<"\n1. push\n";
        cout<<"2. pop\n";
        cout<<"3. Top\n";
        cout<<"4. Is Empty\n";
      
        cout<<"Enter choice:\n";
        int cho;
        cin>>cho;
        
        switch (cho) {
            case 1:
                int data;
                cout<<"Enter element:";
                cin>>data;
                
                if (top+1==n)
                {
                    cout<<"Stack is full!!";
                }
                else
                {
                    top++;
                    arr[top]=data;
                }
                break;
                
            case 2:
                if (top==-1)
                {
                    cout<<"Stack is Empty!";
                    
                }
                else
                {
                    top--;
                }
                break;
            case 3:
                if (top==-1) {
                    cout<<"Stack is Empty!";
                }
                else
                {
                    cout<<"Top element is :"<<arr[top];
                }
                break;
            case 4:
                if (top==-1)
                {cout<<"\nYES";}
                else
                { cout<<"\nNO";}
                break;
                
            default:
                break;
                
               
        }
        cout<<"\nStack is:";
        for(int i=0;i<top+1;i++)
        {
            
            cout<<arr[i]<<"   ";
        }
        
    
    }
    
    
    
    
    return 0;
}
