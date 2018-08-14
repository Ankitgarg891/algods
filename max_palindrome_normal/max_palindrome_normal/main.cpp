//
//  main.cpp
//  max_palindrome_normal
//
//  Created by Ankit Garg on 04/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main(int argc, const char * argv[]) {
    // insert code here...
    
    //std::cout << "Hello, World!\n";
    
    string A="abvbvbvvbvbvbjkjkj";
    
    //string ans=A.substr(0,1);
    int n=A.size();
    
    
    int glob_len=1;
    int glob_j=0;
    
    
    
    for (int i=0;i<n;i++)
    {
        int j=i-1;
        int k=i+1;
        
        
        string str = "";
        
        while (j>=0 && k<n)
        {
            if (A[j]==A[k])
            {
                // str=A.substr(j,k-j+1);
                if (k-j+1>glob_len)
                    
                {glob_len=k-j+1;
                    glob_j=j;
                    //glob_k=k;
                    
                    
                }
                
            }
            
            else{break;}
            
            j--;
            k++;
            
        }
        j=i;
        k=i+1;
        
        while (j>=0 && k<n)
        {
            if (A[j]==A[k])
            {
                if (k-j+1>glob_len)
                    
                {glob_len=k-j+1;
                    glob_j=j;
                    //glob_k=k;
                    
                    
                }
                
            }
            else{break;}
            
            j--;
            k++;
            
        }
        
        
    }
    
    cout<<"ans:"<<endl;
    cout<<A.substr(glob_j,glob_len)<<endl;
    
    
    
    return 0;
}
