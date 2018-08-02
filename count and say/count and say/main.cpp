//
//  main.cpp
//  count and say
//
//  Created by Ankit Garg on 01/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//


#include <iostream>
using namespace std;
#include <string>


int main(int argc, const char * argv[]) {
    
    int A=5;
    
    string ans;
    
    string seq_glob="1";
    //seq.push_back('-');
    int len_glob=1;
    
    
    for (int i=0;i<A;i++)
    {
        string last_str=seq_glob;
        last_str.push_back('-');
        int len_last=len_glob+1;
        
        //cout<<"last_Str:"<<last_str<<"  len_last:"<<len_last<<endl;
        
        string seq="";
        int len=0;
        int ctr=1;
        
        for (int j=1;j<last_str.length();j++)
        {
            
            if (last_str[j]==last_str[j-1])
            {
                ctr++;
                
            }
            else
            {
                seq+=to_string(ctr);
                seq.push_back(last_str[j-1]);
                len+=2;
                ctr=1;
            
            }
            
            
            
            
        }
        seq_glob=seq;
      //  cout<<"seq:"<<seq_glob<<endl;
        
        len_glob=len;
        ans=seq;
        
    
    }
    
    cout<<ans<<endl;
    return 0;
}
