#include<iostream>
using namespace std;

int binary_search(int a[],int key,int s,int e,int n){

    int mid = s+(e-s)/2;

    if(s>e) return -1;

    if(a[mid] == key){
        return mid;
    }
    if(a[mid]<key){
       return binary_search(a,key,mid+1,e,n);
    }
    else{
        return binary_search(a,key,s,mid-1,n);
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
    int key;
    cin>>key;

    int index = binary_search(a,key,0,n-1,n);
    cout<<"index of key is "<<index<<endl;

    return 0;
}