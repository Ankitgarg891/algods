//
//  main.cpp
//  spiral_in_c
//
//  Created by Ankit Garg on 01/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

int main() {
    // insert code here...
    
    int arr[1][1]={{1}};
    
    int dir=0;
    int i;
    
    int t=0,b=0,l=0,r=0;
    while(t<=b && l<=r)
        
    {
        if (dir==0)
        {
            for (i=l;i<r+1;i++)
            {
            cout<<arr[t][i]<<"\n";
            }
            t++;
        }
        if (dir==1)
        {
            for (i=t;i<b+1;i++)
            {
                cout<<arr[i][r]<<"\n";
            }
            
            r--;
        }
        if (dir==2)
        {
            for (i=r;i>=l;i--)
            {
                cout<<arr[b][i]<<"\n";
            }
            
            b--;
        }
        if (dir==3)
        {
            for (i=b;i>=t;i--)
            {
                cout<<arr[i][l]<<"\n";
            }
           
            l++;
            
            
        }
        dir=(dir+1)%4;   }return 0;


}
