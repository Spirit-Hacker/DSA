#include<iostream>
using namespace std;

void merge(int a[],int s,int e){
    int mid = s+(e-s)/2;

    int len1 = mid-s+1;
    int len2 = e-mid;

    int first[len1];
    int second[len2];

    int mainArray = s;
    for(int i=0;i<len1;i++){
        first[i] = a[mainArray];
        mainArray++;
    }

    mainArray = mid + 1;
    for(int i=0;i<len2;i++){
        second[i] = a[mainArray];
        mainArray++;
    }

    int index1 = 0;
    int index2 = 0;

    mainArray = s;

    while(index1 < len1 and index2 < len2){
        if(first[index1] < second[index2]){
            a[mainArray] = first[index1];
            mainArray++;
            index1++;
        }

        else{
            a[mainArray] = second[index2];
            mainArray++;
            index2++;
        }
    }

    while(index1 < len1){
        a[mainArray] = first[index1];
        mainArray++;
        index1++;
    }

    while(index2 < len2){
        a[mainArray] = second[index2];
        mainArray++;
        index2++;
    }

}

void merge_sort(int a[],int s,int e){
    if(s>=e) return;

    int mid = s+(e-s)/2;
    merge_sort(a,s,mid);
    merge_sort(a,mid+1,e);

    merge(a,s,e);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    merge_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } cout<<endl;


    return 0;
}