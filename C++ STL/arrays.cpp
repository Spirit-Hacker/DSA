#include<bits/stdc++.h>
using namespace std;

int main()
{
    int basic[3] = {1,2,3}; // Normal Array

    array<int, 4> a = {1,2,3,4}; // STL Array

    int size = a.size();

    for(int i=0;i<size;i++){
        cout<<a[i]<<" ";
    } cout<<endl;

    cout<<"Element at 2nd index-> "<<a.at(2)<<endl;
    cout<<"Element at 0th index-> "<<a.at(0)<<endl;

    cout<<"Empty or not-> "<<a.empty()<<endl;

    cout<<"First Element-> "<<a.front()<<endl;
    cout<<"Last Element-> "<<a.back()<<endl;

    return 0;
}