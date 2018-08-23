#include <iostream>
using namespace std;

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

void merge_sort(int* arr,int start,int end){

	if (start==end)
	{
		return;
	}
	int mid=(start+end)/2;

	merge_sort(arr,start,mid);
	merge_sort(arr,mid+1,end);
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





int main()
{
	int arr[]={4,1,6,3,2,5,8,7,45,5,5,4,5,45,4,5,45,4,5,4,5,3,0};
	int n=sizeof(arr)/sizeof(arr[0]);

	for (int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"\n";
	merge_sort(arr,0,n-1);

	for (int i=0;i<n;i++)
	{
		cout<<arr[i]<<"  ";
	}
	cout<<"_end\n";

	return 0;

}
