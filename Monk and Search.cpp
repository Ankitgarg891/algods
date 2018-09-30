/*
// Sample code to perform I/O:

cin >> name;                            // Reading input from STDIN
cout << "Hi, " << name << ".\n";        // Writing output to STDOUT

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail
*/

// Write your code here

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int ans (int arr[],int n,int type,int q)
{
    
    if (type==1)
    {q=q+1;}
    
    int ans=-1;
    int s=0;
    int e=n-1;
    int mid;
    
    while (s<=e)
    {
        mid=(s+e)/2;
        
        if (arr[mid]>=q)
        {
            ans=mid;
            e=mid-1;
        }
        else if(arr[mid]<q) {
            s=mid+1;
        }
      
    }
    
    if (ans==-1)
        {return 0;}
    return n-ans;
}


int main()
{
    
    int n;
    cin>> n;
    int* arr = new int[n];
    for (int i=0;i<n;i++)
    {
        int a;
        cin>>a;
        arr[i]=a;
    }
    
    sort(arr,arr+n);


   
    int q;
   // cout<<"\nq:";
    cin>>q;
    for (int i=0;i<q;i++)
    {
        int type,num;
        cin>>type>>num;
        
        cout<<ans(arr,n,type,num)<<endl;
    }
    
    
    
    return 0;
}
