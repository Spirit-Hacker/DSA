#include<iostream>
using namespace std;

int first_occ(int a[],int key,int n){
    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;
    int ans = -1;
    while(s<=e){
        if(a[mid] == key){
            ans = mid;
            e = mid-1;
        }
        else if(a[mid] < key){
           s = mid+1;
        }
        else{
           e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int last_occ(int a[],int key,int n){
    int s = 0;
    int e = n-1;

    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(a[mid] == key){
            ans = mid;
            s = mid+1;
        }
        else if(a[mid] < key){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;

    }
    return ans;
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

    int first = first_occ(a,key,n);
    int last = last_occ(a,key,n);

    cout<<"first "<<first<<endl;
    cout<<"last "<<last<<endl;

    return 0;
}