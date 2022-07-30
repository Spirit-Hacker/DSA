#include<iostream>
using namespace std;

long long int square_root(int n){
    long long int s = 0;
    long long int e = n;

    long long int mid = s+(e-s)/2;

    long long int ans = -1;
    
    while(s<=e){
         if(mid*mid == n){
            return mid;
         }
         else if(mid*mid > n){
            e = mid-1;
         }
         else{
            s = mid+1;
            ans = mid;
         }
         mid = s+(e-s)/2;
    }
    return ans;

}

double more_precision(int n,int precision,int temp_sol){

    double factor = 1;
    double ans = temp_sol;

    for(int i=0;i<precision;i++){
        factor = factor/10;
        for(double j=ans;j*j<n;j=j+factor){
            ans = j;
        }
    }
    return ans;
}

int main()
{
    int n;
    cin>>n;
    
    int temp_sol = square_root(n);

    cout<<more_precision(n,3,temp_sol)<<endl;

    return 0;
}