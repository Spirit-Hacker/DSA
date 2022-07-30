#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int Min_cost(int n,vector<int> &cost,vector<int> &dp){
    if(n==0) return cost[0];
    if(n==1) return cost[1];

    if(dp[n] != -1) return dp[n];

    dp[n] = cost[n] + min(Min_cost(n-2,cost,dp),Min_cost(n-1,cost,dp));
    return dp[n];
}

int main()
{   
    int n;
    cin>>n;
    vector<int> cost(n);
    for(int i=0;i<n;i++){
        cin>>cost[i];
    }
    
    vector<int> dp(n+1,-1);
    int answer = min(Min_cost(n-2,cost,dp),Min_cost(n-1,cost,dp));
    cout<<answer<<endl;

    return 0;
}