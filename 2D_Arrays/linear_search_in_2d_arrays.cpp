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

    int key;
    cin>>key;
    bool flag = 0;
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(matrix[i][j] == key){
                flag = 1;
            }
            
        }
    }

    if(flag) cout<<"element found\n";
    else cout<<"element not found\n";
    return 0;
}