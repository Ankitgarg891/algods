//mst1 spoj bottom up

#include <iostream>
using namespace std;
const int e = 20000001;

int main()
{

	int t=0;
	cin>>t;
	int ctr=1;

	

		int dp[e+1];
		dp[1]=0;
		for (int i=2;i<=e;i++)
		{
			dp[i]=1+dp[i-1];
			if (i%2==0)
			{
				dp[i]=min(dp[i],1+dp[i/2]);
			}
			if (i%3==0)
			{
				dp[i]=min(dp[i],1+dp[i/3]);
			}

		}

		while (t--)
	{
		int n;
		cin>>n;

		cout<<"Case "<<ctr<<": "<<dp[n]<<endl;
		ctr++;
	}
	return 0;
}


