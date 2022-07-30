#include<iostream>
#include<bits/stdc++.h>
using namespace std;

void Fib_Series(int a,int b,int n){
    if(n == 0) return;

    int c = a+b;
    cout<<c<<" ";
    Fib_Series(b,c,n-1);
}

int main()
{
    int n;
    cin>>n;

    int a=0,b=1;
    cout<<a<<" "<<b<<" ";
    Fib_Series(0,1,n-2);
    return 0;
}