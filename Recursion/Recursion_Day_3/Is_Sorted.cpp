#include<iostream>
using namespace std;

bool is_sorted(int size,int a[]){
    if(size==0 || size==1) return true;

    if(a[0]>a[1]) return false;
    else{
        bool ans = is_sorted(size-1,a+1);
        return ans;
    }
}

int main()
{
    int size;
    cin>>size;

    int a[size];
    for(int i=0;i<size;i++){
        cin>>a[i];
    }

    cout<<is_sorted(size,a);
    return 0;
}