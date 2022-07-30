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

    for(int i=0;i<n-1;i++){
        int minindex = i;
        for(int j=i+1;j<n;j++){
            if(v[j] < v[minindex])
               minindex = j;
        }

        swap(v[i],v[minindex]);
    }

    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    return 0;
}