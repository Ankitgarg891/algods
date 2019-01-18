 //
//  main.cpp
//  vector_spiral
//
//  Created by Ankit Garg on 01/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int main(int argc, const char * argv[]) {
    
        
        vector< vector<int> > Arr{{0,1,2},{3,4,5},{6,7,8}};
        
        
        int dir=0;
        int i;
        
        int t=0,b=Arr[0].size()-1,l=0,r=Arr.size()-1;
        while(t<=b && l<=r)
            
        {
            if (dir==0)
            {
                for (i=l;i<r+1;i++)
                {
                    cout<<Arr[t][i]<<"\n";
                }
                t++;
            }
            if (dir==1)
            {
                for (i=t;i<b+1;i++)
                {
                    cout<<Arr[i][r]<<"\n";
                }
                
                r--;
            }
            if (dir==2)
            {
                for (i=r;i>=l;i--)
                {
                    cout<<Arr[b][i]<<"\n";
                }
                
                b--;
            }
            if (dir==3)
            {
                for (i=b;i>=t;i--)
                {
                    cout<<Arr[i][l]<<"\n";
                }
                
                l++;
                
                
            }
            dir=(dir+1)%4;   }

    return 0;
}
