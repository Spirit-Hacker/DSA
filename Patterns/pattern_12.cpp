/*
   n = 3

   A
   B B
   C C C
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
        while(col<=row){
            char ch = 'A'+row-1;
            cout<<ch<<" ";
            ch++;
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}