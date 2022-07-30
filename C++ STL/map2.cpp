#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int g;
    cin>>g;
    map<string,int> m;
    for(auto i : m){
        m.insert({s,g});
        cout<<i.first<<" "<<i.second<<"\n";
    }
    return 0;
}