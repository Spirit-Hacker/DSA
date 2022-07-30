#include<iostream>
#include<algorithm>
using namespace std;

int expo(int a,int b){
    if(b==0) return 1;
    if(b==1) return a;

    if(b%2 == 0){
        return expo(a,b/2) * expo(a,b/2);
    }
    else {
        return a * expo(a,b/2) * expo(a,b/2);
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    cout<<expo(a,b);
    return 0;
}