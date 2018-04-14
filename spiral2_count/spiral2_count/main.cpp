//
//  main.cpp
//  spiral2_count
//
//  Created by Ankit Garg on 14/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

// print spiral from 0 to n sq
#include <iostream>
#include <vector>
using namespace std;

vector<vector<int> > generateMatrix(int A) {
    
    vector < vector<int> > S (A,vector<int>(A));
    
    int ctr=0;
    int dir=0;
    int l=0,t=0,r=A-1,b=A-1;
    while (t<=b && l<=r)
    {
        if (dir==0)
        {
            for (int j=l;j<=r;j++)
            {
                ctr++;
                S[t][j]=ctr;
            }
            t++;
        }
        else if (dir==1)
        {
            for (int j=t;j<=b;j++)
            {
                ctr++;
                S[j][r]=ctr;
            }
            r--;
        }
        
        else if (dir==2)
        {
            for (int j=r;j>=l;j--)
            {
                ctr++;
                S[b][j]=ctr;
                
            }
            b--;
        }
        
        else if (dir==3)
        {
            for (int j=b;j>=t;j--)
            {
                ctr++;
                S[j][l]=ctr;
                
            }
            l++;
        }
        
        dir=(dir+1)%4;
        
        
        
        
    }
    return S;
    
    
    
    
}


int main(int argc, const char * argv[]) {
    // insert code here...
    
    
    vector <vector<int> > A=generateMatrix(5);
    for (int i=0;i<5;i++)
        
        {
            for (int j=0;j<5;j++)
            {
            cout<<A[i][j]<<"               ";
            }
            cout<<"\n";
        }
    return 0;
}


