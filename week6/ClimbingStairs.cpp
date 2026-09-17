#include<iostream>
using namespace std;
int climb(int n)
{
    if(n<=2)
      return n;
    int prev2=1;
    int prev1=2;
    for(int i=3;i<=n;i++)
    {
        int c=prev2+prev1;
        prev2=prev1;
        prev1=c;
    }
    return prev1;

}
int main()
{
    int n;
    cout<<"Enter no.of stairs : ";
    cin>>n;
    cout<<"climb ways :"<<climb(n);
    return 0;
}
