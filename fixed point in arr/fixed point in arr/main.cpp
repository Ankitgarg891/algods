//
//  main.cpp
//  fixed point in arr
//
//  Created by Ankit Garg on 20/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <queue>
#include <bits/stdc++.h>
using namespace std;

int find_index(int arr[],int n)
{
    int index=INT_MIN;
    int l=0;
    int r=n-1;
    
    while(l<=r)
    {
        int mid=(r+l)/2;
        
        cout<<"    left:"<<l<<"    right:"<<r<<"mid:"<<mid<<endl;
        
        if (arr[mid]==mid)
        {
            index=mid;
            r=mid-1;
        }
        else
        {
            if (arr[mid]<mid)
            {
                l=mid+1;
            }
            else
            {
                r=mid-1;
            }
        }
        
        
        
    }
    
    
    
    return index;
    
}

int main(int argc, const char * argv[]) {
    // insert code here...
    int n;
    cin>>n;
    int *arr=new int[n];
    for (int i=0;i<n;i++)
    {
        cin>>arr[i];}
    
    cout<<find_index(arr,n);
    return 0;
}
