#include<iostream>
using namespace std;

int binary_search(int a[],int key,int n,int s,int e){
 
    int mid = s+(e-s)/2;
    while(s<=e){
        if(a[mid] == key){
            return mid;
        }
        else if(a[mid] < key){
               s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

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

    int key;
    cin>>key;

    int pivot = pivot_ele(a,n);

    if(key >= a[pivot] && key <= a[n-1]){
        cout<< binary_search(a,key,n,pivot,n-1)<<endl;
    }
    else{
        cout<< binary_search(a,key,n,0,pivot-1)<<endl;
    }

    return 0;
}