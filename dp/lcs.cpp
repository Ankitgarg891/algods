//longest commen subseq //dp[][]

// o(m*n)  len s1* len s2

#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main()
{
	
	string s1;
	string s2;

	cin>>s1>>s2;

	//to maintain maximum count in array which is our ans
	int ans=0;  


	int l1=s1.size();

	int l2=s2.length();

	vector < vector<int> > dp (l1+1,vector <int> (l2+1,0));


	for (int i=1;i<l1+1;i++)
	{
		for (int j=1;j<l2+1;j++)
		{
			if (s1[i-1]==s2[j-1])
			{
				if ((dp[i][j]=dp[i-1][j-1]+1)>ans)
					{ans=dp[i][j];}

			}
			else {
				dp[i][j]=max(dp[i-1][j],dp[i][j-1]);
			}
		}

	}

	cout<<ans<<endl;


	return 0;
}