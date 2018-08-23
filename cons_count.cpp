#include <iostream>
using namespace std;


int main()
{

	string a;
	cin>>a;

	int n=a.size();
	int b;
	cin>>b;

	int ctr=0;

	string ans;
	char pre=a[0];

	ans.push_back(a[0]);
	ctr++;

	for(int i=1;i<n;i++)
	{
		
		if (pre==a[i])
		{

			
			if (ctr<b)
			{
				ans.push_back(a[i]);
				ctr++;
			}
		}
		else
		{
			ans.push_back(a[i]);
			pre=a[i];
			ctr=1;
		}

		

	}

	ans.append(" ");
	cout<<ans<<endl;



	return 0;

}