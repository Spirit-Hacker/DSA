#include<iostream>
#include<algorithm>
using namespace std;

bool is_sorted(int n,int a[]){
    if(n==0 || n==1) return true;

    if(a[0]>a[1]) return false;
    else{
        return is_sorted(n-1,a+1);
    }
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<is_sorted(n,a)<<endl;
    return 0;
}