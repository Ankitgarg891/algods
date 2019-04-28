#include <iostream>

using namespace std;

int main()
{


	string s;
	getline(cin,s);

	int n=s.length();

	int flag=n;

	cout<<"\n\n\n\nout:";
	for (int i=n-1;i>=0;i--)
	{

		if (s[i]==' ')
		{
			for (int j=i+1;j<flag;j++)
			{
				cout<<s[j];
			}
			cout<<" ";
			flag=i;


		}

		if (i==0)
		{
			for (int j=i;j<flag;j++)
			{
				cout<<s[j];
			}

		}
	}



	return 0;
}