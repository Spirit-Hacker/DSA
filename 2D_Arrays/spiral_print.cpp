#include<bits/stdc++.h>
using namespace std;

int main()
{
    int row,col;
    cin>>row>>col;

    int matrix[row][col];
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin>>matrix[i][j];
        }
    }
     cout<<"\n";

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }

    vector<int> ans;

    int count = 0;
    int total = row*col;

    int starting_row = 0;
    int starting_col = 0;
    int ending_row = row-1;
    int ending_col = col-1;

    while(count < total){
        for(int i=starting_col; count < total && i<=ending_col;i++){
            ans.push_back(matrix[starting_row][i]);
            count++;
        }
        starting_row++;

        for(int i=starting_row; count < total && i<=ending_row;i++){
            ans.push_back(matrix[i][ending_col]);
            count++;
        }
        ending_col--;

        for(int i=ending_col; count < total && i>=starting_col;i--){
            ans.push_back(matrix[ending_row][i]);
            count++;
        }
        ending_row--;

        for(int i=ending_row; count < total && i>=starting_row;i--){
            ans.push_back(matrix[i][starting_col]);
            count++;
        }
        starting_col++;
    }

    for(int i:ans){
        cout<<i<<" ";
    } cout<<endl;

    return 0;
}