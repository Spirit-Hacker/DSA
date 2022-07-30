/*
    n = 4          n = 3

    1              1
    2 3            2 3
    3 4 5          3 4 5
    4 5 6 7
*/

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;

    int row = 1;
    while(row<=n){
        int col = 1;
        int value = row;
        while(col<=row){
            cout<<value<<" ";
            value++;   // value-- for print like->   n = 4  ->  1,2 1,3 2 1,4 3 2 1
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}