/*
        n = 3       n = 5

        3 2 1      5 4 3 2 1
        3 2 1      5 4 3 2 1
        3 2 1      5 4 3 2 1
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row=1;
    while(row<=n){
        int col=1;
        while(col<=n){
            cout<<n-col+1<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}