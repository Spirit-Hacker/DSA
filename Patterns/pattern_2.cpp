/*
       n = 4            n = 5 

       1 2 3 4          1 2 3 4 5
       1 2 3 4          1 2 3 4 5
       1 2 3 4          1 2 3 4 5
       1 2 3 4          1 2 3 4 5
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
            cout<<col<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}