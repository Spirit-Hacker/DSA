#include<bits/stdc++.h>
using namespace std;

int main()
{
    stack <string> s;
    s.push("Pranil");
    s.push("Ayush");
    s.push("Umesh");

    cout<<"Top element-> "<<s.top()<<endl;
    s.pop();
    cout<<"Top after pop-> "<<s.top()<<endl;

    cout<<"size of stack-> "<<s.size()<<endl;
    cout<<"Empty or not-> "<<s.empty()<<endl;
    s.pop();
    s.pop();
    cout<<"Empty or not-> "<<s.empty()<<endl;
    return 0;
}