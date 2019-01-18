//
//  main.cpp
//  kadane algo(max substring sum)
//
//  Created by Ankit Garg on 10/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
#include <vector>
using namespace std;

int maxSubArray(const vector<int> &A) {
    vector<int> C=A;
    int max_sum=0;
    int local_sum=0;
    
    for (int i=0;i<A.size();i++)
    {
        local_sum+=A[i];
        if (local_sum<=0)local_sum=0;
        
        if (local_sum>max_sum)max_sum=local_sum;
        
        
    }
    if (max_sum==0)
    {
        vector<int>::iterator x = max_element(C.begin(),C.end());
        
        return *x;  //maximum of vector
    }
    else{
        return max_sum;}
}


int main(int argc, const char * argv[]) {
    
    vector<int> B={-6,1,1,12,11,2,-10};
    cout<<maxSubArray(B);
    //int arr[]={1,3,4,5};
    //cout<<"   \n"<<*max_element(arr,arr+4);
    cout << "\n";
    return 0;
}
