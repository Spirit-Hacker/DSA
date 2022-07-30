#include<bits/stdc++.h>
using namespace std;

bool check(vector<int> &v){
    int c = 0;
    int size = v.size();

    for(int i=1;i<size;i++){
        if(v[i-1] > v[i]){
            c++;
        }
    }
    if(v[size-1] > v[0]){
        c++;
    }

    return c<=1;
}

int main()
{
    int n;
    cin>>n;
    int c = 0;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }

    cout<<check(v)<<endl;
        return 0;
}