#include<bits/stdc++.h>
using namespace std;

void print(int n){
    if(n==0) return;

    //print(n-1);  // for printing in ascending order
    cout<<n<<endl;
     print(n-1);  // for printing in descending order
}

int main(){

    int n;
    cin>>n;
    print(n);
    return 0;
}