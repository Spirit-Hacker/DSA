/*

given a matrix :-

    which is sorted column-wise and also row-wise.
    write efficient algorithm to find given element in the matrix.
     
     1  4  7  11 15
     2  5  8  12 19
     3  6  9  16 22
     10 13 14 17 24
     18 21 23 26 30


 */

#include<bits/stdc++.h>
using namespace std;

bool search(int row,int col,vector<vector<int>> &matrix,int key){
    int row_index = 0;
    int col_index = col-1;

    while(row_index <= row-1 && col_index >= 0){
        int element = matrix[row_index][col_index];

        if(element == key){
            return true;
        }
        else if(element < key){
            row_index++;
        }
        else{
            col_index--;
        }
    }
    return false;
}

int main()
{
    int row,col;
    cin>>row>>col;

    vector<vector<int>> matrix(row,vector<int>(col));
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }

    int key;
    cin>>key;

    cout<<search(row,col,matrix,key)<<endl;
    return 0;
}