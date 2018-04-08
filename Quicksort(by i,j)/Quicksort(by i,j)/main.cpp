//
//  main.cpp
//  Quicksort(by i,j)
//
//  Created by Ankit Garg on 09/04/18.
//  Copyright © 2018 Ankit Garg. All rights reserved.
//

#include <iostream>
using namespace std;
int partition(int arr[],int start,int end)
{
    int i=start;
    int j=end-1;;
    int pivot=arr[end];
    while (i<j)
    {
        while(arr[i]<pivot)
        {i++;}
        while (arr[j]>pivot)
        {j--;}
        if (i<j)
        {
            int temp=arr[i];
            arr[i]=arr[j];
            arr[j]=temp;
            i++;
            j--;
        }
    }
    if (arr[i]>pivot)
    {
    arr[end]=arr[i];
    arr[i]=pivot;
    return i;
    }
    else
    {
        return end;
    
    }
}

void quicksort(int arr[],int start,int end)

{
    if (start<end)
    {
        int part=partition(arr,start,end);
        
        

        quicksort(arr, start, part-1);
        quicksort(arr, part+1, end);
        
        

    
    }
    
}

int main(int argc, const char * argv[]) {
    
    int arr[]={7,2,1,6,8,5,3,4,67,90909,0};
    int size=11;
    quicksort(arr,0,size-1);
    
    cout<<"\nArray after quick sort:";
    for (int i=0;i<size;i++)
    {
    cout<<arr[i]<<"  ";
    }
    return 0;
}
