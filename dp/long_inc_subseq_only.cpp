#include <iostream>
#include <math.h>
#define ll long long  
using namespace std;

int main()
{
	int t;
	cin>>t;

	int arr[1001];
	int dp[1001];
	while (t--)
	{
		int n;
		cin>>n;

		int ans=1;

		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
			dp[i]=1;
		}


		for (int i=0;i<n;i++)
		{
			for (int j=0;j<i;j++)
			{
				if (arr[i]>arr[j])
				{
					if ((dp[i]=max(dp[i],dp[j]+1))>ans)
					{
						ans=dp[i];
					}

				}


			}
		}

		cout<<ans<<endl;


		
	}
	return 0;
}