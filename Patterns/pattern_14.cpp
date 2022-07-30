/*
   n = 4
   A
   B C 
   C D E
   D E F G
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
        char value = 'A';
        while(col<=row){
            cout<<char(value+row-1)<<" ";
            value++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}