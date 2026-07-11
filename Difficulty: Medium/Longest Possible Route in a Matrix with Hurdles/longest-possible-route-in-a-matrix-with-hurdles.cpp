class Solution {
  public:
    int solve(vector<vector<int>>& mat, int i, int j, int xd, int yd,
    vector<vector<bool>>&visited){
        if(i < 0 || j < 0 || i >= mat.size() || j >= mat[0].size() || mat[i][j] == 0)
            return -1;
        if(i==xd&&j==yd){
            return 0;
        }
        visited[i][j]=true;
        int ans = -1;
        if(i>0&&!visited[i-1][j]){
         int u =solve(mat,i-1,j,xd,yd,visited);
         if(u!=-1)
         ans = max(ans,u+1);
         
        }
        if(i<mat.size()-1&&!visited[i+1][j]){
         int u = solve(mat,i+1,j,xd,yd,visited);
            if(u!=-1)
             ans = max(ans,u+1);
         
        }
        if(j>0&&!visited[i][j-1]){
         int u =  solve(mat,i,j-1,xd,yd,visited);
         if(u!=-1)
             ans = max(ans,u+1);
         
        }
        if(j<mat[0].size()-1&&!visited[i][j+1]){
         int u = solve(mat,i,j+1,xd,yd,visited);
         if(u!=-1)
             ans = max(ans,u+1);
         
        }
        visited[i][j]=false;
        return ans;
    }
    int longestPath(vector<vector<int>>& mat, int xs, int ys, int xd, int yd) {
        // code here
        
        if(mat[xs][ys] == 0 || mat[xd][yd] == 0)
             return -1;
         vector<vector<bool>> visited(mat.size(), vector<bool>(mat[0].size(), false));
         return solve(mat,xs,ys,xd,yd,visited);
    }
};