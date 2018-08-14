//
//  main.cpp
//  anti diagnol
//
//  Created by Ankit Garg on 14/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;


vector<vector<int> > diagonal(vector<vector<int> > &A) {
    
    int n = A.size();
    int ctr=0;
    vector<vector<int> > B(2*(n-1)+1);
    for(int j=0;j<n;j++)
    {
        int k=j;
        int i=0;
        while (k>=0)
        {
            //cout<<"  \n "<<A[i][k];
            B[ctr].push_back(A[i][k]);
            i++;k--;
            
                        
        }
        ctr++;
    }

    for (int i=1;i<n;i++)
    {
        int k=i;
        int j=n-1;
        while (k<n)
        {
            //cout<<"  \n "<<A[k][j];
            B[ctr].push_back(A[k][j]);
            k++,j--;
            
                    }
        
        
        
        ctr++;
    }
    return B;
    
    
    
    
}


int main(int argc, const char * argv[]) {
    vector<vector<int> > A={{1,2,3},{4,5,6},{7,8,9}};
    vector<vector<int> > B=diagonal(A);
    
    
    cout<<"\nFinal vector:\n";
    for(int i=0;i<B.size();i++)
    {
        for (int j=0;j<B[i].size();j++)
        {
            cout<<B[i][j]<<"  ";
        
        }
        
        cout<<" \n";
    
    
    }
    
    
    return 0;
    
    
    
    
    
    
    
}
