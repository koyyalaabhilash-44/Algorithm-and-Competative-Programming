#include <bits/stdc++.h>
using namespace std;
int lis(vector<int> &a)
{
    int n=a.size();
    vector<int> r(n,1);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<i;j++)
        {
            if(a[i]>a[j])
               r[i]=max(r[i],r[j]+1);
        }
    }
    /*for(int i=0;i<n;i++)//for print result vector
        cout<<r[i]<<" ";*/
    return *max_element(r.begin(),r.end());
}
int main()
{
   int n;
   cout<<"enter n :";
   cin>>n;
   cout<<"enter elements:";
   vector<int> a(n);
   for(int i=0;i<n;i++)
        cin>>a[i];
    cout<<endl<<endl;
    
   cout<<"max LIS :"<<lis(a);
   return 0;
   /*input:enter n:6
        enter elements:3 1 2 5 4 6
    output:max LIS:4*/
}
