

#include <iostream>
using namespace std;

int main() {
vector<int> spiralOrder(const vector<vector<int> > &A) {
    
    int dir=0;
    int i;
    std::vector<int> v;

    
    int t=0,b=A[0].size()-1,l=0,r=A.size()-1;
    while(t<=b && l<=r)
        
    {
        if (dir==0)
        {
            for (i=l;i<r+1;i++)
            {
            v.push_back(A[t][i]);
            }
            t++;
        }
        if (dir==1)
        {
            for (i=t;i<b+1;i++)
            {
                v.push_back(A[i][r]);
            }
            
            r--;
        }
        if (dir==2)
        {
            for (i=r;i>=l;i--)
            {
                v.push_back(A[b][i]);
            }
            
            b--;
        }
        if (dir==3)
        {
            for (i=b;i>=t;i--)
            {
                v.push_back(A[i][l]);
            }
           
            l++;
            
            
        }
        dir=(dir+1)%4;   }




}

}
