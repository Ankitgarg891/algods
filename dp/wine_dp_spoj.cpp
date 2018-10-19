//TRT - Treats for the Cows

#include <iostream>

using namespace std;

int dp[2001][2001];
int arr[2001];

int max_price(int s,int e,int age)
{
	if (s==e)
	{
		return (dp[s][e]=arr[s]*age);
	}
	if (dp[s][e]!=-1)
	{
		return dp[s][e];
	}

	int a=age*arr[s]+max_price(s+1,e,age+1);
	int b=age*arr[e]+max_price(s,e-1,age+1);

	return (dp[s][e]=max(a,b));


}
int main()
{
	int n;
	cin>>n;
	memset(dp,-1,sizeof(dp));

	///int arr=new int[n];
	for (int i=0;i<n;i++)
		{cin>>arr[i];}

	cout<<max_price(0,n-1,1);


	return 0;
}