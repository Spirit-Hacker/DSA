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

    for(int j=0;j<col;j++){
        if(j%2 == 0){
            // even index -> top to bottom
            for(int i=0;i<row;i++){
                cout<<matrix[i][j]<<" ";
            }
        }
        else{
            // odd index -> bottom to top
            for(int i=row-1;i>=0;i--){
                cout<<matrix[i][j]<<" ";
            }
        }
    }

    return 0;
}