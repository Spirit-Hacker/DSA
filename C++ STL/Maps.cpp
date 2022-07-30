#include<bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> m; // Ordered map
    m.insert({1,"Pranil"});
    m.insert({2,"Ayush"});
    m.insert({7,"Umesh"});
    m.insert({4,"Gaurav"});
    m.insert({5,"Harshwardhan"});
    m.insert({3,"Harsh"});

    cout<<"before erase"<<endl;
    for(auto i : m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }

    cout<<"Finding 7-> "<<m.count(7)<<endl;
    cout<<"Finding -7-> "<<m.count(-7)<<endl;

    m.erase(7);
    cout<<"After Erase"<<endl;
    for(auto i : m){
        cout<<i.first<<"-->"<<i.second<<endl;
    }

    auto it = m.find(3);
    for(auto i=it;i!=m.end();i++){
        cout<<(*i).first<<endl;
    }
    return 0;
}