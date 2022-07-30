#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;
    vector<int> v(n);
    for(int i=0;i<n;i++){
        cin>>v[i];
    }
    //cout<<v.at(0)<<endl;

   int m;
   cin>>m;
   int s=m,e=n-1;
   for(int i=0;i<n;i++){
       if(s<=e){
           swap(v[s],v[e]);
           s++;
           e--;
       }
   }
    for(int i=0;i<n;i++){
        cout<<v[i]<<" ";
    }cout<<endl;

    //cout<<v.at(0)<<endl;
    

    return 0;
}