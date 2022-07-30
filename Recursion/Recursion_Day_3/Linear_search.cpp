#include<iostream>
using namespace std;

bool linear_search(int n,int a[],int key){
    if(n==0) return false;

    if(a[0] == key) return true;

    else{
        bool found = linear_search(n-1,a+1,key);
        return found;
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

    bool ans = linear_search(n,a,key);
    
    if(ans) cout<<"Present\n";
    else cout<<"Absent\n";

    return 0;
}