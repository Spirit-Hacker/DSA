#include<iostream>
using namespace std;

int main()
{
    int a,b;
    cin>>a>>b;

    int c = a&b;
    int d = a|b;
    int e = a^b;

    cout<<"a&b "<<c<<endl;
    cout<<"a|b "<<d<<endl;
    cout<<"a^b "<<e<<endl;
    cout<<"~a "<<~a<<endl;
    cout<<"~b "<<~b<<endl;

    return 0;
}