
/*
    Given an array of length ‘N’, where each element denotes the position of a stall. 
    Now you have ‘N’ stalls and an integer ‘K’ which denotes the number of cows that are aggressive. 
    To prevent the cows from hurting each other, you need to assign the cows to the stalls, 
    such that the minimum distance between any two of them is as large as possible. 
    Return the largest minimum distance.
*/

#include<bits/stdc++.h>
using namespace std;

bool is_posible(int stals[],int n,int k,int mid){
    int cow_count = 1;
    int last_pos = stals[0];

    for(int i=0;i<n;i++){

        if(stals[i] - last_pos >= mid){
            cow_count++;
            last_pos = stals[i];
        }

        if(cow_count == k){
            return true;
        }
    }
    return false;

}

int maximum_distance(int stals[],int n,int k,int maxi){
    int s = 0;
    int e = maxi;

    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(is_posible(stals,n,k,mid)){
            ans = mid;
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;

    int maxi = -1;
    int stals[n];
    for(int i=0;i<n;i++){
        cin>>stals[i];
        maxi = max(maxi,stals[i]);
    }

    sort(stals,stals+n);

    int max_distance = maximum_distance(stals,n,k,maxi);
    cout<<max_distance<<endl;

    return 0;
}