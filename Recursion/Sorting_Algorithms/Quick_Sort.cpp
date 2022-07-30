#include<iostream>
using namespace std;

int partition(int a[],int s,int e){
    int pivot = a[s];
    int cnt = 0;

    for(int i=s+1;i<=e;i++){
        if(a[i] <= pivot){
            cnt++;
        }
    }

    int pivot_index = s+cnt;
    swap(a[pivot_index],a[s]);

    int i = s;
    int j = e;

    while(i < pivot_index && j > pivot_index){
        while(a[i] <= pivot){
            i++;
        }
        while(a[j] > pivot){
            j--;
        }
        if(i < pivot_index && j > pivot_index){
            swap(a[i],a[j]);
            i++;
            j--;
        }
    }
    return pivot_index;
}

void quick_sort(int a[],int s,int e){
    if(s>=e) return;

    int p = partition(a,s,e);

    quick_sort(a,s,p-1);
    quick_sort(a,p+1,e);
}

int main()
{
    int n;
    cin>>n;

    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
     
    quick_sort(a,0,n-1);
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    } cout<<endl;

    return 0;
}