#include <iostream>
#include <vector>
#include <bits/stdc++.h>
#define ll int
const int limit1 = 20000002;
int dp[limit1];

using namespace std;

ll mst(ll n)
{
	// already calculated
	if (dp[n]!=-1)
		{return dp[n];}

	//base case
	if (n<=1)
		{return (dp[n]=0);}

	ll min1=INT_MAX,div2=INT_MAX,div3=INT_MAX;

	if (n>=2)
	{
		min1=1+mst(n-1);
	}

	if (n%2==0)
	{
		div2=1+mst(n/2);
	}

	if (n%3==0)
	{
		div3=1+mst(n/3);
	}


	return (dp[n]=min(min1,min(div2,div3)));

}

int main()
{
	int t;
	cin>>t;

	
	
	memset(dp,-1,sizeof(dp));
		//vector <ll> dp (n+1,-1);
		//cout<<dp[n]<<"aa";
	dp[1]=0;
	cout<<"max c:"<<mst(limit1-1);
	//cout<<"Case ak "<<": "<<dp[1536]<<endl;

	int a=1;

	while (t--)
	{    
		int n;
		cin>>n;
		cout<<"Case "<<a<<": "<<dp[n]<<endl;
		a++;
		//cout<<endl;
	}

	return 0;
}