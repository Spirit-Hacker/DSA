#include<bits/stdc++.h>
using namespace std;

int main()
{
    deque<int> d;
    d.push_back(1);
    d.push_back(2);
    d.push_back(3);
    d.push_front(4);

    for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Element at 2nd index-> "<<d.at(2)<<endl;
    cout<<"Front-> "<<d.front()<<endl;
    cout<<"Last-> "<<d.back()<<endl;

    cout<<"Empty or not-> "<<d.empty()<<endl;
    cout<<"Before erase-> "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"After erase-> "<<d.size()<<endl;



    

    int n;
    cin>>n;
    deque<int> dd(n);
    for(int i=0;i<n;i++){
        cin>>dd[i];
    }
    for(int i=0;i<n;i++){
        cout<<dd[i]<<" ";
    }cout<<endl;

    cout<<dd.front();
    






    /*d.pop_back();

     for(int i: d){
        cout<<i<<" ";
    }cout<<endl;

    d.pop_front();

     for(int i: d){
        cout<<i<<" ";
    }cout<<endl; */

    return 0;
}