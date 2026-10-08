#include <bits/stdc++.h>
using namespace std;

vector<int> sum(vector<int> &arr,int tar)
{
    unordered_map<int, int> map;
    for(int i=0;i<arr.size();i++)
    {
        int p=tar-arr[i];
        if(map.find(p)!=map.end())
        {
            return {map[p],i};
        }
        map[arr[i]]=i;
    }
    return {};
}
int main()
{
      int n;
      cout<<"enter size of vector";
      cin>>n;
      vector<int> arr(n);
      cout<<"enter elements";
      for(int i=0;i<arr.size();i++)
      {
        cin>>arr[i];
      }
      int tar;
      cout<<"enter target";
      cin>>tar;
      vector<int> res=sum(arr,tar);
      if(res.empty())
      {
        cout<<"no valid sum";
      }
      else{
        cout<<"valid sum result indexs of array:"<<res[0]<<" "<<res[1]<<endl;
      }
      return 0; 
      /* enter size of vector:4
enter elements:
23
12
3
53
enter target:15
valid sum result index of given array:1 , 2
*/                                    
}
