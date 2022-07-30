#include<bits/stdc++.h>
using namespace std;

int main()
{
    // Works as Double linked List
    list<int> l;

    l.push_back(1);

    l.push_front(2);

    for(int i:l){
        cout<<i<<" ";
    }cout<<endl;
     
    

    return 0;
}