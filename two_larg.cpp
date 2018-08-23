#include <iostream>
//#include <limits>
using namespace std;

int main(){

	int n;
	cin>>n;
	int * arr = new int[n];
	for (int i=0;i<n;i++)
	{
		cin>>arr[i];
	}

	int f=INT_MIN;
	int s=INT_MIN;

	for (int i=0;i<n;i++)
	{
		if (arr[i]>=f)
		{
			s=f;
			f=arr[i];
		}
		else if (arr[i]>s && arr[i]!=f)
		{
			s=arr[i];

		}

		
	}

	cout<<"Largest:"<<f<<"\nsecond Largest:"<<s;




	return 0;
}