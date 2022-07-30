#include<iostream>
using namespace std;

void Bubble_Sort(int a[],int n){
     if(n == 0 || n == 1) return;

     for(int i=0;i<n-1;i++){
        if(a[i]>a[i+1]) swap(a[i],a[i+1]);
     }

     return Bubble_Sort(a,n-1);    
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    Bubble_Sort(a,n);
    
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } cout<<endl;

    return 0;
}