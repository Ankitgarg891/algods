/*Given a value V. You have to make change for V cents,
 given that you have infinite supply of each of C{ C1, C2, .. , Cm} valued coins. Find the minimum number of coins to make the change
*/
#include<iostream>
#include<bits/stdc++.h>
using namespace std;

const int lim = 1000001;
int dp[lim];
int arr[lim];

int min_coin(int v,int n)
{
	if (v<0)
	{
		return INT_MAX;
	}
	
	if (dp[v]!=-1)
	{
		return dp[v];
	}

	if (v==0)
	{
		return (dp[v]=0);
	}



	int min1=INT_MAX;
	//int flag=0;
	for (int i=0;i<n;i++)
	{
		//if (v>=arr[i] && min_coin(v-arr[i],n)!=INT_MAX )
		if ( min_coin(v-arr[i],n)!=INT_MAX )
		{
			min1=min(min1,1+min_coin(v-arr[i],n));
		}
		
	}

	return (dp[v]=min1);
}
int main()
 {
	//code

	int t;
	cin>>t;

	while (t--)
	{
		memset(dp,-1,sizeof(dp));
		int v,n;
		cin>>v>>n;

		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
		}
		min_coin(v,n);
/*
		cout<<"dp array:";
		for (int i=0;i<v+5;i++)
		{
			cout<<i<<":"<<dp[i]<<"	";
		}
		cout<<"\n\n\nAns:";*/
	
		if (dp[v]==INT_MAX)
			cout<<-1<<endl;
		else cout<<dp[v]<<endl;


	}


	return 0;
}