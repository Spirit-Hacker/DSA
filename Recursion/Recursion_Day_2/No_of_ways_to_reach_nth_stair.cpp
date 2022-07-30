#include<iostream>
using namespace std;

int No_of_way(int stairs){
    if(stairs<0) return 0;
    if(stairs==0) return 1;

    return No_of_way(stairs-1) + No_of_way(stairs-2);
}

int main()
{
    int stairs;
    cin>>stairs;
    cout<<No_of_way(stairs);
    return 0;
}