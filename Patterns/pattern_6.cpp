/*
    n = 3
    1 
    2 2
    3 3 3
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
            cout<<row<<" ";
            col++;
        }
        cout<<endl;
        row++;
    }
    return 0;
}