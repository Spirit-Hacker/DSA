#include<iostream>
using namespace std;

int pivot_ele(int a[],int n){
    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;

    while(s<e){
        if(a[mid] >= a[0]){
            s = mid+1;
        }
        else{
            e = mid;
        }
        mid = s+(e-s)/2;
    }
    return e;
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int pivot = pivot_ele(a,n);
    cout<<pivot<<endl;

    return 0;
}