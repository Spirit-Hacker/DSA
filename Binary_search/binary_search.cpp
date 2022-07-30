#include<iostream>
using namespace std;

int binary_search(int a[],int key,int n){

    int start = 0;
    int end = n-1;

    int mid = start+(end-start)/2;

    while(start<=end){
        if(a[mid] == key){
            return mid;
        }
        if(a[mid] < key){
            start = mid+1;
        }
        else{
            end = mid-1;
        }

        mid = start+(end-start)/2;
    }
    return -1;
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

    int index = binary_search(a,key,n);
    cout<<"index of key is "<<index<<endl;
    return 0;
}