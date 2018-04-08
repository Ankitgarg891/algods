//
//  main.cpp
//  merge_sort
//
//  Created by Ankit Garg on 04/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;


void mergeLR(int arr[],int start,int mid , int end)
{
    
    
    int l=mid-start+1;  //len left
    int r=end-mid;      //len right
    
    
    
    int i=0,j=0,k=start;
    
    int arr_l[l];
    int arr_r[r];
    int ssss = 0;
    for (int z=start;z<mid+1;z++)
    {
        arr_l[ssss++]=arr[z];
    
    }
   
    
    int ss=0;
    
    for (int z=mid+1;z<end+1;z++)
    {
        arr_r[ss++]=arr[z];
        
    }
    
        while (i<l && j<r)
        {
            if (arr_l[i]<arr_r[j])
            {
                arr[k]=arr_l[i];
                
                i++;k++;
            }
            else
            {
                arr[k]=arr_r[j];
                j++;k++;
            }
        }
    if(i<l)
    {
        while (i<l)
        {
            arr[k]=arr_l[i];
            i++;k++;
            
        }
    }
    if(j<r)
    {
        while (j<r)
        {
            arr[k]=arr_r[i];
            j++;k++;
        }
    }
    
    
    cout<<"\nArray after merge:";

    
    for (int i=0;i<5;i++)
        
    {
        cout<<arr[i]<<"  ";
        
    }
    
}








void merge_sort(int arr[],int start,int end,int count)
{
    
    if (end<=start)
    {return;}
    int mid = (start+end)/2;
    merge_sort(arr,start,mid,count);      //sorting left,left array (start to mid)
    merge_sort(arr, mid+1, end,count);    //sorting right,right arr (mid+1 len)
    mergeLR(arr, start, mid, end);   // merging
    
}


int main() {
    // insert code here...
    cout << "Hello, World!\n";
    int arr[]={5,4,3,2,1,6};
    int n=6;
    int rec=0;
    merge_sort(arr,0, n-1,rec);
    cout<<"\nFinal array is:";
    for (int i=0;i<5;i++)
    {
        cout<<arr[i]<<"    ";
    }
    return 0;
}
