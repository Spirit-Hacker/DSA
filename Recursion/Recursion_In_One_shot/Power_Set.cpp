#include<iostream>
#include<bits/stdc++.h>
using namespace std;

// initialize total_subsets with 0
int total_subsets = 0;

// calling print_subset function

void print_subsets(vector<int> input,vector<int> subset,int index){

    // base case of recursive function

    if(index >= input.size()){

        // print elements in "subset" array

        for(auto i : subset){
            cout<<i<<" ";
        } cout<<endl;

        total_subsets++;
        return;
    }

    // elements to be not included in subset
    print_subsets(input,subset,index+1);  // recursively calling function

    // elements to be inluded in subset
    subset.push_back(input[index]);
    print_subsets(input,subset,index+1);   // recursively calling function

}

int main()
{

    // input size of array
    int n;
    cin>>n;

    // input elements of array
    vector<int> input(n);
    for(int i=0;i<n;i++){
        cin>>input[i];
    }

    // initialize "subset" array
    vector<int> subset;

    // calling the function
    print_subsets(input,subset,0);
    cout<<"total number of subsets : "<<total_subsets<<endl;

    return 0;
}