#include<bits/stdc++.h>
using namespace std;

bool Binary_search(int row,int col,int key,vector<vector<int>> &matrix){
    int s = 0;
    int e = row*col - 1;

    int mid = s+(e-s)/2;
    int element = matrix[mid/col][mid%col];

    while(s<=e){
        if(element == key){
            return true;
        }
        else if(element < key){
            s = s+mid;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
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

    cout<<Binary_search(row,col,key,matrix);


    return 0;
}