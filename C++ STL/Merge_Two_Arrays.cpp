#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    vector<int> v1(n);
    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    vector<int> v2(m);
    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    int sum = n+m;
    vector<int> ans(sum);

    int i=0,j=0,k=0;
    while(i<n and j<m){
        if(v1[i]<v2[j]){
            ans[k]=v1[i];
            i++;
            k++;
        }
        else{
            ans[k]=v2[j];
            j++;
            k++;
        }
    }

    while(i<n){
        ans[k]=v1[i];
        i++;
        k++;
    }

    while(j<m){
        ans[k]=v2[j];
        j++;
        k++;
    }

    for(int i=0;i<sum;i++){
        cout<<ans[i]<<" ";
    } cout<<endl;

    return 0;
}