/*Given a string Str containing only lowercase characters. 
The task is to print the characters of the given string in order of their increasing frequency. 
 If two characters have the same frequencies, then the character which is lexicographically smaller will be printed first.

Note: For duplicate characters print the characters only once in order of their increasing frequencies.
For example, if the string contains 'a' 3 times and 'b' 4 times then the output will be "ab" instead of "aaabbbb"*/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;
bool cmp( pair<int,int>  a, pair<int,int> b)
{
    if (a.first==b.first)
    {
        return (a.second<b.second);
    }
    return (a.first<b.first);

}
int main() {
	//code
	int t;
	cin>>t;
	for (int i=0;i<t;i++)
	{
	    string s;
	    cin>>s;
	   // int n=s.length();
	    vector <pair<int,int> > v (26,make_pair(0,0)); 
	 
	    for (int i=0;i<26;i++)
	    {
	        v[i].second=i;
	    }
	    for (int i=0;i<s.length();i++)
	    {
	        (v[int(s[i])-97].first)++;
	        
	    }
	    
	    sort(v.begin(),v.end(),cmp);
	    
	    for (int i=0;i<26;i++)
	    {
	       // cout<<"("<<v[i].first<<",";
	       // cout<<v[i].second<<") ";
	        
	        if (v[i].first!=0)
	        {
	            cout<<char(v[i].second+97);
	        }
	            
	   
	       
	        
	    }
	    cout<<endl;
	    //cout<<"\n---end-----"<<t<<endl;
	    

		
	}
	return 0;
}