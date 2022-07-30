#include<iostream>
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

    for(int i=0;i<row;i++){
        for(int j=i;j<col;j++){
           swap(matrix[i][j],matrix[j][i]);
        }
    }

    cout<<"Transpose of Matrix is \n";
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<"\n";
    }
    
    return 0;
}