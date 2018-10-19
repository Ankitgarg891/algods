#include <iostream>
using namespace std;
#include <bits/stdc++.h>
int main() {
	//code
	
	int t;
	cin>>t;
	vector <int> v1 (t);
	int max=0;
	
	for(int i=0;i<t;i++)
	{
	    cin>>v1[i];
	    if (v1[i]>max)
	    {
	        max=v1[i];
	    }
	    
	}
	
	vector <int> v2 (max+1,1);
	v2[1]=0;
	for (int i=2;i*i<=max+1;i++)
	{
	    if (i!=0)
	    {
	        for (int j=i+i;j<max+1;j=j+i)
	        {
	            v2[j]=0;  // 0 is marked and not prime                                                   
	            
	        }
	    }
	    
	}
	
	for (int i=0;i<t;i++)
	{
	    for (int j=2;j<v1[i]+1;j++)
	    {
	        if(v2[j]==1)
	        {
	        cout<<j<<" ";}
	    }
	    cout<<endl;
	}
	
	return 0;
}