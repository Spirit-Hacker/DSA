#include<iostream>
#include<bits/stdc++.h>
using namespace std;

map<pair<int,int>,bool> visited;

bool isSafe(int a,int b,int n,int m){
    if(a>=0 && a<n && b>=0 && b<m && visited[make_pair(a,b)] == false){
        return true;
    }
    return false;
}

void Print_Ways(int n,int m,int src_x,int src_y,int dest_x,int dest_y,string output){
    visited[make_pair(src_x,src_y)] == true;

    // base case
    if(src_x == dest_x && src_y == dest_y){
        cout<<"Answer  "<<output<<endl;
        visited[make_pair(src_x,src_y)] == false;
        return;
    }

    //Right

    if(isSafe(src_x+1,src_y,n,m)){
        output.push_back('R');
        Print_Ways(n,m,src_x+1,src_y,dest_x,dest_y,output);
        output.pop_back();
    }

    //Up

    if(isSafe(src_x,src_y+1,n,m)){
        output.push_back('U');
        Print_Ways(n,m,src_x,src_y+1,dest_x,dest_y,output);
        output.pop_back();
    }

    visited[make_pair(src_x,src_y)] == false;

}

int main()
{
    int n,m;
    cin>>n>>m;

    int src_x,src_y;
    cin>>src_x>>src_y;

    int dest_x,dest_y;
    cin>>dest_x>>dest_y;

    string output = "";
    Print_Ways(n,m,src_x,src_y,dest_x,dest_y,output);
    for(auto i:output){
        cout<<i<<" ";
    } cout<<endl;

    return 0;
}