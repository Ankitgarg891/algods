#include <iostream>
using namespace std;


int dp[2000][2000];
int ctr=0;
int wines[2000];
int max_profit(int st,int en, int year)
{

	ctr++;
	if (dp[st][en]!=-1) return dp[st][en];
	if (st>en)
		return 0;

	int a=year*wines[st]+max_profit(st+1,en,year+1);
	int b=year*wines[en]+max_profit(st,en-1,year+1);

	dp[st][en]=max(a,b);
	return dp[st][en];

}
int main()
{

	int n;
	cin>>n;

		memset(dp,-1,sizeof(dp));
	for (int i=0;i<n;i++)
	{
		cin>>wines[i];
	}

	cout<<max_profit(0,n-1,1)<<endl;

	cout<<ctr;
	return 0;
}