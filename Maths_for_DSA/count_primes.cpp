#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> prime(n+1,true);
    prime[0] = prime[1] = false;

    int count = 0;
    for(int i=2;i<=n;i++){
        if(prime[i]){
            count++;
            for(int j=2*i;j<=n;j=j+i){
                prime[j] = 0;
            }
        }
    }
    cout<<count<<endl;

    return 0;
}