//Longest Increasing Subsequence
#include <iostream>
using namespace std;

int main()
{
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
		int n;
		cin>>n;

		int* arr = new int[n];
		int* arr2= new int[n];
		for (int i=0;i<n;i++)
		{
			cin>>arr[i];
			arr2[i]=1;
		}

        int ans=0;
		
		
		for (int i=0;i<n;i++)
		{
			for (int j=0;j<i;j++)
			{
				if (arr[i]>arr[j])
				{
					arr2[i]=max(arr2[i],arr2[j]+1);
					
				}
				
				ans=max(ans,arr2[i]);

			}
			
			
		}
		cout<<ans<<endl;
	}

	


	return 0;
}