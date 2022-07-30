#include<bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> Maxi; // Max Heap
    

    priority_queue<int, vector<int>, greater<int> > mini; // Min Heap

    Maxi.push(9);
    Maxi.push(3);
    Maxi.push(10);
    Maxi.push(2);
    Maxi.push(5);

    int n = Maxi.size();
    for(int i=0;i<n;i++){
        cout<<Maxi.top()<<" ";
        Maxi.pop();
    }cout<<endl;

    mini.push(13);
    mini.push(15);
    mini.push(9);
    mini.push(2);
    mini.push(6);

    int nn = mini.size();
    for(int i=0;i<nn;i++){
        cout<<mini.top()<<" ";
        mini.pop();
    }cout<<endl;



    return 0;
}