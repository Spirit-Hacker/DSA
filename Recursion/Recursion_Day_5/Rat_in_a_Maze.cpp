#include<bits/stdc++.h>
using namespace std;

bool is_safe(int n,int x,int y,vector<vector<int>> &maze,vector<vector<int>> &visited){
     if((x>=0 && x<n) && (y>=0 && y<n) && visited[x][y] == 0 && maze[x][y] == 1){
        return true;
     }
     else{
      return false;
     }
}

void solve(int n,int x,int y,vector<string> &ans,vector<vector<int>> &maze,
          vector<vector<int>> &visited,string path){

              if(x == n-1 && y == n-1){
                 ans.push_back(path);
                 return;
              }
            
              // down
              int newx = x+1;
              int newy = y;
              if(is_safe(n,newx,newy,maze,visited)){
                  visited[x][y] = 1;
                  path.push_back('D');
                  solve(n,newx,newy,ans,maze,visited,path);
                  path.pop_back();
                  visited[x][y] = 0;
              }

              // Up
              newx = x-1;
              newy = y;
              if(is_safe(n,newx,newy,maze,visited)){
                  visited[x][y] = 1;
                  path.push_back('U');
                  solve(n,newx,newy,ans,maze,visited,path);
                  path.pop_back();
                  visited[x][y] = 0;
              }

              // left
              newx = x;
              newy = y-1;
              if(is_safe(n,newx,newy,maze,visited)){
                  visited[x][y] = 1;
                  path.push_back('L');
                  solve(n,newx,newy,ans,maze,visited,path);
                  path.pop_back();
                  visited[x][y] = 0;
              }

              // right
              newx = x;
              newy = y+1;
              if(is_safe(n,newx,newy,maze,visited)){
                  visited[x][y] = 1;
                  path.push_back('R');
                  solve(n,newx,newy,ans,maze,visited,path);
                  path.pop_back();
                  visited[x][y] = 0;
              }
  
          }

vector<string> find_path(int n,vector<vector<int>> &maze){
    vector<string> ans;

    if(maze[0][0] == 0){
      return ans;
    }
    int start_x = 0;
    int start_y = 0;

    vector<vector<int>> visited = maze;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
          visited[i][j] = 0;
        }
    }

    string path = "";
    solve(n,start_x,start_y,ans,maze,visited,path);
    return ans;
}

int main()
{
    int n;
    cin>>n;

    vector<vector<int>> maze(n,vector<int> (n));
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        cin>>maze[i][j];
      }
    }

    vector<string> result = find_path(n,maze);
    if(result.size() == 0){
      cout<<-1<<endl;
    }
    else{
      for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
      } cout<<endl;
    }

    return 0;
}