//
//  main.cpp
//  longest_palindrome
//
//  Created by Ankit Garg on 02/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//


//

#include <iostream>
using namespace std;
#include <string>
#include <vector>

void set_arr(int start,int end,string A,vector<vector<int>> &arr)
{
    
    if (A[start]==A[end])
    {
        
        if (start+1<=end-1)
        {
            
            
            if(arr[start+1][end-1]==1)
            {
                arr[start][end]=1;
            }
            else if (arr[start+1][end-1]==2)
            {
                arr[start][end]=2;
            
            }
            else
            {
                set_arr(start+1, end-1, A, arr);
                if(arr[start+1][end-1]==1)
                {
                    arr[start][end]=1;
                }
                else //if (arr[start+1][end-1]==2)
                    {
                    arr[start][end]=2;}
             }
        }
        
        else{arr[start][end]=1;}
    }


    else
    {
        arr[start][end]=2;
    }
}


int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    string A="a";
    
    string ans="";
    int glob_diff=-1;
    int glob_i;
    int glob_j;
    
    vector<vector<int>> arr(A.length(),vector<int> (A.length()));
    
    for(int i=0;i<A.length();i++)
    {
        arr[i][i]=1;
    }
    
    for (int i=0;i<A.length();i++)
    {
        for (int j=i; j<A.length(); j++) {
            
            
            
            if (arr[i][j]==0)
            {
                set_arr(i,j,A,arr);
                
                
            }
            if (arr[i][j]==1 && j-i>glob_diff)
            {
                ans=A.substr(i,j+1);
                glob_diff=j-i;
                glob_i=i;
                glob_j=j;
                
                
            }
            
    
    }
    }
    
    
    for (int i=0;i<A.length();i++)
        {
            for (int j=i; j<A.length(); j++) {
                
                cout<<"("<<i<<","<<j<<")"<<arr[i][j]<<"     ";
                
                
            }
            cout<<"\n\n"<<endl;
            
        }
    
    cout<<"i&j:"<<glob_i<<","<<glob_j<<"  ans:"<<A.substr(glob_i,glob_j-glob_i+1)<<endl;
    
   /* for (int i=0;i<A.length();i++)
    {
        for (int j=A.length();j>=0;j++)2
        {
            if (arr[i][j]==1)
            {
                
            }
            
        }
        
    }
    */
    
    
    
    
    return 0;
}
