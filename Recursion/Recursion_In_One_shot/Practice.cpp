#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int total_subsets = 0;

void print_subset(vector<int> input,vector<int> subset,int index){

    if(index >= input.size()){
        for(auto i : subset){
            cout<<i<<" ";
        } cout<<endl;
        total_subsets++;
        return;
    }

    print_subset(input,subset,index+1);

    subset.push_back(input[index]);
    print_subset(input,subset,index+1);
}

int main()
{
    int n;
    cin>>n;
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }
    vector<int> subset;
    print_subset(input,subset,0);
    cout<<"Total number of arrays : "<<total_subsets<<endl;

    return 0;
}