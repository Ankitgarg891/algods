//
//  main.cpp
//  inside_parenthesis
//
//  Created by Ankit Garg on 16/07/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include<iostream>


using namespace std;

string abc(string s,bool bol)
{
    
    if (s[0]=='(')
    {
        return abc(s.substr(1),1);
    }
    
    if (s[0]==')')
    {
        return "";
        
    }
    if (bol)
    {
        return (s[0]+abc(s.substr(1),1));
    }
    
    
    return abc(s.substr(1),0);
            
    
    
    
   
    
}
        
        int main() {
            
            string s;
            cin>>s;
            
            
            cout<<abc(s,0)<<endl;
            
            cout<<"ok";
            
            
            return 0;
        }
