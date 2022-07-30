#include<iostream>
#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<ll> a(n);
        for(ll i=0;i<n;i++) cin>>a[i];

        vector<ll> dp(n,1);
        int ans = 1;
        for(ll i=1;i<n;i++){
            if(a[i-1] <= a[i]){
                dp[i] = dp[i] + dp[i-1];
            }
            ans = ans + dp[i];
        }

        cout<<ans<<endl;
    }

    return 0;
}