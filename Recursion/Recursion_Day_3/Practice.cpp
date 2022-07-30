#include<iostream>
using namespace std;

bool Binary_search(int a[],int key,int s,int e){
    int mid = s+(e-s)/2;

    if(s>e) return false;

    if(a[mid]==key) return true;
    else if(a[mid] > key){
        return Binary_search(a,key,s,mid - 1);
    }
    else{
        return Binary_search(a,key,mid + 1,e);
    }
}

int main()
{
    int n;
    cin>>n;
    int s=0,e=n-1;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    int key;
    cin>>key;

    int ans = Binary_search(a,key,s,e);

    if(ans) cout<<"Found\n";
    else cout<<"Not Found\n";

    return 0;
}