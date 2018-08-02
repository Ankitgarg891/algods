//
//  main.cpp
//  make_palindromic_string
//
//  Created by Ankit Garg on 01/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;
#include <string>
#include <algorithm>



int main(int argc, const char * argv[]) {
    
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    string A="aba";
    
    //int ans=0;
    
    for (int i=0;i<A.length();i++)
    {
        string B=A.substr(0,A.length()-i);
        
        reverse(B.begin(), B.end());
        
        cout<<"A:"<<A.substr(0,A.length()-i)<<"  B:"<<B<<endl;
        
        
        
        if (A.substr(0,A.length()-i) == B)
            
        {
            cout<<i;
            break;
            
        }
    }
    
    
    
    
    
    
    
    
    
    return 0;
}
