//
//  main.cpp
//  implement_strstr
//
//  Created by Ankit Garg on 04/08/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include<string>

using namespace std;

int main(int argc, const char * argv[]) {
    // insert code here...
    //std::cout << "Hello, World!\n";
    
    string A="bbbbbbbbab";
    string B="baba";
    
    string A1=A;
    string B1=B;
    
    int index=-1;
    if (B1.length()>A1.length())
    {
        index=-1;
    }
    
    else{
        for(int i=0;i<=A1.length()-B1.length();i++)
        {
            //cout<<"\n\ni:"<<i<<endl;
            if (A1[i]==B1[0])
            {
                int flag=0;
                //cout<<"index:"<<index<<endl;
                
                int k=1;
                while (k<B1.length())
                {
                    if (A[k+i]!=B[k])
                    {
                        flag=-1;
                        //cout<<"test1:A,B-"<<A[k+i]<<","<<B[k]<<endl;
                        
                        break;
                    }
                    k++;
                }
                if (flag==0)
                {
                    index=i;
                }
            }z
        }
    }
    
    cout<<"ans:";
    cout<<index<<endl;
    return 0;
}
