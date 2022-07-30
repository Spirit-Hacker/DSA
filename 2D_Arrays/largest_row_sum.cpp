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

     int maxi = INT_MIN;
     int row_num = INT_MIN;
     for(int i=0;i<row;i++){
        int sum = 0;
        for(int j=0;j<col;j++){
            sum = sum+matrix[i][j];
        }
        if(sum>maxi){
            maxi = sum;
            row_num = i;
        }
       
    }

    cout<<"maximum row sum is : "<<maxi<<endl;
    cout<<"row index is : "<<row_num<<endl;
    return 0;
}