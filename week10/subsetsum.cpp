#include<bits/stdc++.h>
using namespace std;
bool sum(vector<int> &arr,int idx,int rem)
{
    if(rem==0)
       return true;
    if(idx==arr.size()||rem<0)
        return false;
    if(subset(arr,idx+1,rem-arr[idx]))
         return true;
    return subset(arr,idx+1,rem);
}
int main()
{
    int n;
    cout<<"enter n:";
    cin>>n;
    vector<int> arr(n);
    cout<<"enter elements:"<<endl;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int target;
    cout<<"enter the target:";
    cin>>target;
    if(sum(arr,0,target))
    {
        cout<<"sum is found";
    }
    else
    {
        cout<<"sum is not found";
    }
 return 0;
}
/*enter n:5
enter elements:
4
3
5
2
4
enter the target:10
sum is found*/
