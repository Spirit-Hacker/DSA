
// its a same problem like book allocation, but here we have to find minimum
// time required to paint a board.
// a[i] represents time required to paint that part of board.  

#include<iostream>
using namespace std;

bool is_posible(int a[],int n,int k,int mid){
        int time = 0;
        int painter = 1;

        for(int i=0;i<n;i++){
            if(time + a[i] <= mid){
                time = time+a[i];
            }
            else{
                painter++;
                if(painter > k || a[i] > mid){
                    return false;
                }
                time = a[i];
            }
        }
        return true;
}

int min_time_to_paint(int a[],int n,int k,int sum){
    int s = 0;
    int e = sum;

    int mid = s+(e-s)/2;
    int ans = -1;

    while(s<=e){
        if(is_posible(a,n,k,mid)){
            ans = mid;
            e = mid-1;
        }
        else{
            s = mid+1;
        }
        mid = s+(e-s)/2;
    }
    return ans;
}

int main()
{
    int n,k;
    cin>>n>>k;

    int sum = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
        sum = sum+a[i];
    }

    int min_time = min_time_to_paint(a,n,k,sum);
    cout<<min_time<<endl;
    return 0;
}