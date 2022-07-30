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
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    } cout<<endl;

    int key;
    cin>>key;

    cout<<binary_search(v.begin(),v.end(),key);
    

    return 0;
}