///Given an array A of integers, find the maximum of j - i subjected to the constraint of A[i] <= A[j].

//If there is no solution possible, return -1.


//A : [3 5 4 2]

//Output : 2   for the pair (3, 4)

bool cmp(pair<int,int> a, pair<int,int> b)
{
    return (a.first<b.first);

}

int Solution::maximumGap(const vector<int> &A) {
    
   vector <pair<int,int> > vp;
   
   for(int i=0;i<A.size();i++)
   {
       vp.push_back(make_pair(A[i],i));
   }
   
   sort(vp.begin(),vp.end(),cmp);
   int max=0;
   vector <int> vmax (A.size());
   for (int i=A.size()-1;i>=0;i--)
   {
       if (vp[i].second>max)
       {
           max=vp[i].second;
       }
       vmax[i]=max;
       
   }
   
   int ans=0;
   for (int i=0;i<A.size();i++)
   {
     //  cout<<vmax[i]<<"     "<<vp[i].second<<endl;
       if ((vmax[i]-vp[i].second)>ans)
      { ans=vmax[i]-vp[i].second;}
   }
   return ans;
    
}