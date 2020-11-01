#include <iostream>
#include <bits/stdc++.h>
#include <vector>

using namespace std;
int main()
{
	int n;
	cin>>n;

	vector <int> v(n);

	for (int i=0;i<n;i++)
	{
		cin>>v[i];
	}


	int i=0;
	int j=1;

	cout<<"here";
	int ctr=0;

	while (v[i]!=v[j])
	{
		cout<<ctr<<":ctr\n";


		i=(i+1)%n;
		j=(j+1)%n;

	}

	cout<<i<<" "<<j;

	



	
	return 0;
}