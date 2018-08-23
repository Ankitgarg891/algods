#include <iostream>
#include <string>
using namespace std;

int main()
{
	string a;
	cin>>a;

	int arr[257]={0};

	int n=a.size();

	int i=0;
	while(i<n)
	{
		arr[int(a[i])]++;

		i++;

	}

	for (int i=1;i<=256;i++)
	{
		if (arr[i]!=0)
		{
		cout<<char(i)<<"_"<<arr[i]<<"   ";}
	}





	return 0;
}
