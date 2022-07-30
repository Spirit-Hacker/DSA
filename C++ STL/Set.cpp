#include<bits/stdc++.h>
using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(3);
    s.insert(6);
    s.insert(1);
    s.insert(3);

    for(auto i:s){
        cout<<i<<" ";
    }cout<<endl;
    
    set<int>:: iterator it = s.begin();
    it++;
    s.erase(it);
    for(auto i : s){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"5 Hai kya Set me ?? -> "<<s.count(5)<<endl;
    cout<<"-5 Hai kya Set me ?? -> "<<s.count(-5)<<endl;

    
    cout<<"Value present at it-> "<<*it<<endl;

    set <int> :: iterator itr = s.find(5);

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    return 0;
}