#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
	vector <string> v;


 		string a;
	while (cin>>a)

 	{
 		
 		v.push_back(a);


	}
	

	for (int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
	return 0;

}
