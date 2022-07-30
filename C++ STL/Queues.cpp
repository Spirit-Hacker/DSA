#include<bits/stdc++.h>
using namespace std;

int main()
{
    queue<string> q;
    q.push("Pranil");
    q.push("Umesh");
    q.push("Ayush");
    q.push("Gaurav");
    cout<<q.size()<<endl;
    cout<<"First-> "<<q.front()<<endl;
    q.pop();
    cout<<"First-> "<<q.front()<<endl;
    
    cout<<"Empty or not-> "<<q.empty()<<endl;
    q.pop();
    q.pop();
    q.pop();
    cout<<"Empty or not-> "<<q.empty()<<endl;


    return 0;
}