#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main()
 {
	//code
	int t;
	cin>>t;
	while (t--)
	{
	    int n,x;
	    cin>>n>>x;
	    int arr[n];
	    for (int i=0;i<n;i++)
	    {
	        cin>>arr[i];
	    }
	    sort(arr,arr+n);
	    int flag=0;
	    for (int i=0;i<n;i++)
	    {
	        if (flag==1)
	        {break;}
	        int a=i+1;
	        int b=n-1;
	        
	        int sum=x-arr[i];
	        while (a<b)
	        {
	        if (a==i)
	        {a++;}
	        if (b==i)
	        {b--;}
	        if (arr[a]+arr[b]==sum)
	        {   cout<<1<<endl;
	        flag=1;
	            break;
	            
	        }
	        else if (arr[a]+arr[b]<sum)
	        {a++;}
	        else
	        {b--;}
	        }
	        
	    }
	    if (flag==0)
	    {cout<<0<<endl;}
	}
	return 0;
}