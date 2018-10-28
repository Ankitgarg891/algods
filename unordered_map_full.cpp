#include <iostream>
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;

int main()
	{

	unordered_map <int,int>  umap;

	umap[1]=100;
	umap[2]=200;
	cout<<umap[1];

	int key;
	int value;
	cin>>key>>value;

	umap.insert(make_pair(key,value));
	cout<<umap[key]<<endl;

	
cout<<"-------\n\n";
int f;
	cin>>f;
	cout<<"find value:";
	if (umap.find(f)==umap.end())
	{
		cout<<"not found";
	}
	else
		{cout<<umap[f];}

cout<<"-------\n\n";

	unordered_map <int,int> ::iterator itr;
	for (itr=umap.begin();itr!=umap.end();itr++)
	{
		cout<<itr->first<<endl;
	}









	return 0;
	}