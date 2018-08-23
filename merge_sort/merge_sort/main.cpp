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
    
    
    int i=0,j=0,k=start;
    
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
    
    
    //cout<<"\nArray after merge:";

    
   
    
}


void join(int* arr,int start,int end,int mid)
{
    //cout<<"\n\ninside join\n\n";
    
    //cout<<"  start:"<<start<<"  mid:"<<mid<<"	end:"<<end<<endl;
    
    
    int l1=(mid-start)+1;
    int l2=(end-mid);
    
    //cout<<"  l1:"<<l1<<"  l2:"<<l2<<endl;
    
    int arr1[l1];
    int arr2[l2];
    
    //cout<<"\narray 1eft:";
    for (int i=0;i<l1;i++)
    {
        arr1[i]=arr[i+start];
        //cout<<arr1[i]<<" ";
    }
    
    //cout<<"\narray right:";
    for (int i=0;i<l2;i++)
    {
        arr2[i]=arr[i+mid+1];
        //cout<<arr2[i]<<" ";
    }
    
    int y=0,z=0;
    
    for (int i=start;i<=end;i++)
    {
        if (y>=l1)
        {
            arr[i]=arr2[z];
            
            z++;
            
        }
        else if (z>=l2)
        {
            arr[i]=arr1[y];
            
            y++;
            
        }
        
        else if (arr1[y]<=arr2[z])
        {
            arr[i]=arr1[y];
            //cout<<"aaya tha--------------->";
            
            y++;
        }
        
        
        else
        {
            arr[i]=arr2[z];
            
            z++;
            
        }
        
        
        
    }
    
    
}





void merge_sort(int* arr,int start,int end)
{
    
    if (end==start)
    {return;}
    int mid = (start+end)/2;
    merge_sort(arr,start,mid);      //sorting left,left array (start to mid)
    merge_sort(arr, mid+1, end);    //sorting right,right arr (mid+1 len)
  //  mergeLR(arr, start, mid, end);   // merging
    
    cout<<"\nLeft Part:";
    
    for (int i=start;i<=mid;i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    
    
    cout<<"\nright Part:";
    for (int i=mid+1;i<=end;i++)
    {
        cout<<arr[i]<<"  ";
    }
    
    
    join(arr,start,end,mid);
    cout<<"\nAfter join:";
    for (int i=0;i<=5;i++)
    {
        cout<<arr[i]<<"  ";
    }
    cout<<":join\n";

    
}


int main() {
    
    int arr[]={3,6,4,6,7};
    int n=5;
   // int rec=2;
    merge_sort(arr,0, n-1);
    cout<<"\nFinal array is:";
    
    for (int i=0;i<n;i++)
    {
        cout<<arr[i]<<"    ";
    }
   
}
