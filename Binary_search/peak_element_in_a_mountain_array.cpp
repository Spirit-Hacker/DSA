#include<iostream>
using namespace std;

int peak_element(int a[],int n){
    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;

    while(s<e){
        if(a[mid] <= a[mid+1]){
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

    int peak = peak_element(a,n);
    cout<<peak<<endl;

    return 0;
}