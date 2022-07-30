#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k;
    cin>>n>>k;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
        swap(v[i],v[i%k]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}