//
//  main.cpp
//  largest_no
//
//  Created by Ankit Garg on 19/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
#include <string>

using namespace std;


bool compare1(string a, string b)
{
    
    if (a[0]==b[0] && (a.size()==1 || b.size()==1))
        {
        if (a.size()==1)
        {
            if (b[1]>b[0])
            {
                return 0;
            }
            else{
                return 1;}
        }
        else
        {
            if (a[1]>a[0])
            {
                return 1;
            }
            else{
                return 0;}
            
            
        }
       
    }
    else
    {
    return (a>b);
    }
}
string largestNumber(vector<int> &A) {
    
    string p;
    
    vector<string> Q(A.size());
    
    for(int i=0;i<A.size();i++)
    {
        p=to_string(A[i]);
        Q.push_back(p);
    }
    sort(Q.begin(),Q.end(),compare1);
    string ans;
    for(int i=0;i<Q.size();i++)
    {
        ans=ans+Q[i];
    }
    cout<<"ans: "<<ans;
    
    return p;
    
}


int main(int argc, const char * argv[]) {
    vector<int> B={3,30,34,5,9};
    string ans=largestNumber(B);
    
    
    return 0;
}
