#include<iostream>
using namespace std;

// Function to print name n no. of times

void func(int i,int n){
    if(i>n){
        return;
    }
    cout<<"Pranil\n";
    func(i+1,n);
}

int main()
{
    int n;
    cin>>n;
    func(1,n);
    return 0;
}