#include<iostream>
using namespace std;

bool Binary_Search(int s,int e,int a[],int key){

    int mid = s+(e-s)/2;

    if(s>e) return false;

    if(a[mid] == key) return true;

    else if(a[mid] < key){
       bool ans = Binary_Search(mid + 1,e,a,key);
       return ans;
    }
    else {
       bool answer = Binary_Search(s,mid - 1,a,key);
       return answer;
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

   bool pranil = Binary_Search(s,e,a,key);

   if(pranil) cout<<"Found\n";
   else cout<<"Not Found\n";

    return 0;
}