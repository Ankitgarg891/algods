// reverse words without vector

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s;
	getline(cin,s);
	cout<<"\noutput:";

	int n=s.size();
	int j=n-1,k=n-1;

	for (int i=n-1;i>=-1;i--)
	{
		/*cout<<"loop"<<endl;
		cout<<s[i]<<"_";*/
		if (s[i] ==' ' || i==-1)
		{
			//cout<<"space"<<endl;
			k=i+1;
			for (int z=k;z<=j;z++)
			{
				cout<<s[z];
			}
			cout<<" ";
			j=i-1;
		}
	}


	return 0;
}