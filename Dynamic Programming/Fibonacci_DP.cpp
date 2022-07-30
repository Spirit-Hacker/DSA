#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// "Top Down" approach = "recursion" + "Memoization".
// "Memoization" = store calculated values in a "Map" or "Table" or an "Array".


int Fib_DP(int n,vector<int> &dp){
    if(n<=1) return n;

    if(dp[n] != -1) return dp[n];

    dp[n] = Fib_DP(n-1,dp) + Fib_DP(n-2,dp);
    return dp[n];
}

int main()
{
    int n;
    cin>>n;

    vector<int> dp(n+1);
    for(int i=0;i<n+1;i++){
        dp[i] = -1;
    }

    cout<<Fib_DP(n,dp)<<endl;

    return 0;
}

/**
      Tabulation Method : 

      int main(){
        int n;
        cin>>n;

        vector<int> dp(n+1);

        dp[1] = 1;
        dp[0] = 0;
        
        for(int i=2;i<n+1;i++)
            dp[i] = dp[i-1] + dp[i-2];
        

        cout<<dp[n]<<endl;

        return 0;
      }
 */