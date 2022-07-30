/*
    n = 3

    A
    B C
    D E F
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;
    char value = 'A';

    while(row<=n){
        int col = 1;
        while(col<=row){
            cout<<value<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}