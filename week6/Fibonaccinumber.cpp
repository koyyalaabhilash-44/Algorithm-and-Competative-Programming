#include<iostream>
using namespace std;
int fib(int n)
{
    if(n<=1)
      return n;
    int prev0=0;
    int prev1=1;
    for(int i=2;i<=n;i++)
    {
        int c=prev0+prev1;
        prev0=prev1;
        prev1=c;
    }
    return prev1;

}
int main()
{
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    cout<<"nth term is:"<<fib(n);
    return 0;
}
