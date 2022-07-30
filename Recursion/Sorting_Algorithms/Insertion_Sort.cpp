#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    
    for(int i=1;i<n;i++){
        int temp = v[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(v[j]>temp) v[j+1] = v[j];
        }
        v[j+1] = temp;
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}