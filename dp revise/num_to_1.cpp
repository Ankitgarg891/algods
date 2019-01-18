//n/3,n/2,n-1

#include <iostream>
using namespace std;

int dp[10*5];

int main()
{

	int n;
	cin>>n;

	dp[0]=0;
	dp[1]=0;


	for (int i=2;i<=n;i++)
	{
		dp[i]=(1+dp[i-1]);
		if (i%3==0) dp[i]=min(1+dp[i/3],dp[i]);

		if (i%2==0) dp[i]=min(1+dp[i/2],dp[i]);
		
		



	}

	cout<<dp[n];

	return 0;

}
