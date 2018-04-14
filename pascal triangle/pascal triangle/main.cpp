#include <iostream>
#include <vector>
using namespace std;

int main()
{
    
    int n=4;
   // int arr[n];
    vector<vector<int> > A;
    
    for (int i=0;i<n;i++)
        
    {
        
        A.push_back(vector<int> ());
        for (int j=0;j<=i;j++)
        {
            if (i==j || j==0)
            {
                A[i].push_back(1);
                
            }
            else
            {
                A[i].push_back(A[i-1][j]+A[i-1][j-1]);
                
            }
        }
    }
    
    
     for (int i=0;i<n;i++)
     {
     	for (int j=0;j<=i;j++)
     	{
     		cout<<" "<<A[i][j];
     	}
     	cout<<"\n";
    
     }
    
    
    
    
    return 0;
    
    
    
    
} 
