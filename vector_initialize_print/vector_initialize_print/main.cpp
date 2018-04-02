//
//  main.cpp
//  vector_initialize_print
//
//  Created by Ankit Garg on 02/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
    vector< vector<int> > v{{1,2,3},{4,5,6},{7,8,9}};
        
        
        
    for (int i=0;i<v.size();i++)    //v.size()
            
        {
            for(int j=0;j<v[0].size();j++)  //v[0].size()
            { 
                cout<<v[i][j]<<"\n";
                
                
            }
        }
        
        
        
        
    return 0;
    
}

