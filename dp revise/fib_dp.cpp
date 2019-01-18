#include <iostream>
using namespace std;

int dp[300];



int fib(int n)
{
	if (dp[n]!=-1)
	{
		return dp[n];
	}

	if (n==0) return 0;
	if (n==1) return 1;

	return (dp[n]=fib(n-1)+fib(n-2));
}
int main()
{

	memset (dp,-1,300);
	int n;
	cin>>n;
	cout<<fib(n);

	
}