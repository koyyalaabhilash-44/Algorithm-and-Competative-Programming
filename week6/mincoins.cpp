#include <bits/stdc++.h>
using namespace std;
int change(vector<int> &coins,int amount)
{
	vector<int> dp(amount+1,INT_MAX);
    dp[0]=0;
    for (int i=1;i<= amount;i++) 
	{
 		for(int c=0;c<coins.size();c++)
		{
 		    if(coins[c]<= i&&dp[i-coins[c]]!=INT_MAX) 
			{
			   dp[i]=min(dp[i],dp[i-coins[c]] + 1);
			}
 		}
 	}
 return (dp[amount]==INT_MAX)? -1 : dp[amount];
}


int main()
{
	int n;
	cout<<"enter no.of different coins:";
	cin>>n;
	vector<int> coins(n);
	cout<<"enter coins:"<<endl;
	for(int i=0;i<n;i++)
	{
		cin>>coins[i];
	}
	cout<<"enter amount:";
	int amount;
	cin>>amount;
	cout<<"coins you have:";
	for(int i=0;i<n;i++)
	{
		cout<<coins[i]<<" ";
	}
	int result=change(coins,amount);
	cout<<endl<<"minimum no.of coins required:"<<result;
	
}
