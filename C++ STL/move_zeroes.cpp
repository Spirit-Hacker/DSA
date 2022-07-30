#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin>>n;

    vector<int> nums(n);
    for(int i=0;i<n;i++){
        cin>>nums[i];
    }

    int k = 0;
    for(int i=0;i<n;i++){
        if(nums[i] != 0){
            swap(nums[i],nums[k]);
            k++;
        }
    }

    for(int i=0;i<n;i++){
        cout<<nums[i]<<" ";
    } cout<<endl;
    return 0;
}