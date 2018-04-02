//
//  main.cpp
//  insertion_sort
//
//  Created by Ankit Garg on 02/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;

void insertion_sort(int arr[],int size)    //or int *arr
{
    int value,hole;
    for (int i=1;i<size;i++)
    {
        value=arr[i];
        hole=i;
        while(value<arr[hole-1] && hole>0 )
            
        {
            arr[hole]=arr[hole-1];
            hole--;
            
        }
        arr[hole]=value;
    }
    
}

int main(int argc, const char * argv[]) {
    
    int arr[]={5,4,6,7,1,10,1,0,-1};
    int n=9;
    insertion_sort(arr,n);
    for (int j=0;j<n;j++)
    {
        cout<<arr[j]<<"    ";
        
    }
    
return 0;
}
