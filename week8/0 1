#include <bits/stdc++.h>
using namespace std;
int knapsack(vector<int> &weight,vector<int> &profit,int n,int W)
{
	vector<vector<int>> dp(n+1,vector<int>(W+1,0));
	for(int i=1;i<=n;i++)
	{
		for(int j=0;j<=W;j++)
		{
			if (weight[i - 1] > j) 
			{
                dp[i][j] = dp[i - 1][j];               
            } else 
			{
                dp[i][j] = max(dp[i - 1][j],profit[i - 1] + dp[i - 1][j - weight[i - 1]]);      
	       	}
	    }
    }
return dp[n][W];
}
int main()
{
	int n;
	cout<<"enter the no.of elements:";
	cin>>n;
	vector<int> weight(n);
	cout<<"enter objects weights:";
	for(int i=0;i<n;i++)
	    cin>>weight[i];
	vector<int> profit(n);
	cout<<"enter objects profit:";
	for(int i=0;i<n;i++)
	    cin>>profit[i];
	int maxweight;
	cout<<"enter max weight:";
	cin>>maxweight;
	cout<<"max profit:"<<knapsack(weight,profit,n,maxweight);
	/*input:enter the no.of elements:4
	        enter objects weights:1 5 3 2
	        enter objects profit:1 16 10 6
	        enter max weight:7
	  output:max profit:22
	        
	        
	*/
}
