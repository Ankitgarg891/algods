//edit distances geeks for geeks

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int edit_dist(int l1, int l2 , string s1, string s2)
{

	int dp[l1+1][l2+1];

	for (int i=0;i<=l1;i++)
	{
		for (int j=0;j<=l2;j++)
		{

			if (i==0 || j==0)   //if any one length is zero ans is other length
			{
				dp[i][j]=max(i,j);  
			}
			else if (s1[i-1]==s2[j-1])
			{
				dp[i][j]=dp[i-1][j-1];

			}
			else
			{
				//min(dp[i][j-1],  // Insert 
                  //                 dp[i-1][j],  // Remove 
                    //               dp[i-1][j-1]); // Replace


				dp[i][j]=1+min(min(dp[i-1][j],dp[i-1][j-1]),dp[i][j-1]);
				

			}

		//	cout<<dp[i][j]<<"	";
		}
		//cout<<dp[i][j]<<"	";
		//cout<<"\n"<<endl;
	}




	return dp[l1][l2];
}

int main()
{

	int t;
	cin>>t;
	while (t--)
	{


		int t1,t2;
		cin>>t1>>t2;

		string s1,s2;
		cin>>s1>>s2;


		cout<<edit_dist(t1,t2,s1,s2)<<endl;
	}


	return 0;
}