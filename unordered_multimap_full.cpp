
#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
#define UMMAP unordered_multimap 
using namespace std;
typedef unordered_multimap<int, int>:: iterator umit; 


int main()
{
	UMMAP <int, int > ummap;

	ummap.insert(make_pair(50,1));

	ummap.insert(make_pair(25,11));


	ummap.insert(make_pair(50,4));

	  //to print all values
	umit it = ummap.begin();

	while (it!=ummap.end())
	{
		cout<<it->first<<"	"<<it->second<<endl; 
		it++;
	}

	//to print particular value

	it=ummap.find(50);
	if (it!=ummap.end())
	{
		cout<<"value of "<<it->first<<" is:"<<it->second<<endl;
		//delete if found once

		//ummap.erase(it->first);   // erase deletes all pairs corresponding to key 
		//for deleting only one pair
		ummap.erase(it);

	}

	it=ummap.find(50);
	if (it!=ummap.end())
	{
		cout<<"\nvalue of"<<it->first<<"is:"<<it->second<<endl;
		


	}
	else
		{cout<<"\nnot found;";}






	return 0;
}