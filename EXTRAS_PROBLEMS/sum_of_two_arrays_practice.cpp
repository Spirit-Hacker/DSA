#include<iostream>
#include<bits/stdc++.h>
using namespace std;

vector<int> reverse(vector<int> v){
    int s = 0;
    int e = v.size()-1;

    while(s<e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}

vector<int> sum_of_arrays(int n,int m,vector<int> &v1,vector<int> &v2){

    int i = n-1;
    int j = m-1;

    int carry = 0;
    vector<int> ans;

    while(i>=0 && j>=0){
        int val1 = v1[i];
        int val2 = v2[j];

        int sum = val1+val2+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
        j--;
    }

    while(i>=0){
        int sum = v1[i]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        i--;
    }

    while(j>=0){
        int sum = v2[j]+carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
        j--;
    }
    while(carry != 0){
        int sum = carry;
        carry = sum/10;
        int value = sum%10;
        ans.push_back(value);
    }

    for(int i: reverse(ans)){
        cout<<i<<" ";
    } cout<<endl;
}

int main()
{
    int n,m;
    cin>>n>>m;

    vector<int> v1(n);
    vector<int> v2(m);

    for(int i=0;i<n;i++){
        cin>>v1[i];
    }

    for(int i=0;i<m;i++){
        cin>>v2[i];
    }

    sum_of_arrays(n,m,v1,v2);
    
    return 0;
}