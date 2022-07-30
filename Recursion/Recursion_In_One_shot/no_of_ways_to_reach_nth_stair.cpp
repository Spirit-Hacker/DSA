#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int count_no_of_ways(int dest,int src){
    if(dest < src) return 0;
    if(dest == src) return 1;

    return count_no_of_ways(dest-1,src) + count_no_of_ways(dest-2,src) + count_no_of_ways(dest-3,src);
}

int main()
{
    int src = 0;
    int dest;
    cin>>dest;

    cout<<count_no_of_ways(dest,src);

    return 0;
}