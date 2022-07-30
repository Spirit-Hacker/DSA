
//  (a+b)%m = a%m + b%m
//  (a-b)%m = a%m - b%m
//  (a*b)%m = a%m * b%m

#include<bits/stdc++.h>
using namespace std;

#define MOD 100000007
#define ll  long long int

ll a_power_b(ll a,ll b,ll m){
    ll res = 1;
    while(b>0){
        if(b&1){
            // odd power
            res = (res%m * a%m)%m;
        }
        // even power
        a = (a%m * a%m)%m;
        b = b>>1; // divide by 2.
    }
    return res;
}

int main()
{
    // find a to power b;

    ll a,b;
    cin>>a>>b;

    ll m = INT64_MAX;

    cout<<"a to power b "<<a_power_b(a,b,m)<<endl;

    return 0;
}