/*
   n = 3
   A A A
   B B B
   C C C

   to print pattern like  
   A B C
   A B C
   A B C

   just put "col" instead of "row" in here line
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
        while(col<=n){
            cout<<char('A'+row-1)<<" "; // "here"
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}