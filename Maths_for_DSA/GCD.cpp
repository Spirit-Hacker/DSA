#include<bits/stdc++.h>
using namespace std;

int GCD(int a,int b){
    if(a == 0) return b;
    if(b == 0) return a;

    while(a != b){
        if(a>b){
            a = a-b;
        }
        else{
            b = b-a;
        }
    }
}

int main()
{
    int a,b;
    cin>>a>>b;

    int ans = GCD(a,b);

    cout<<"GCD of "<<a<<" "<<b<<" = "<<ans<<endl;
    return 0;
}