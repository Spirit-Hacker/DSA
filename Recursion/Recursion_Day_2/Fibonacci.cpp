#include<iostream>
using namespace std;

int Fibonacci(int n){
    // base case
    if(n==0) return 0;
    if(n==1) return 1;

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main()
{
    int n;
    cin>>n;
    cout<<Fibonacci(n)<<endl;
    return 0;
}