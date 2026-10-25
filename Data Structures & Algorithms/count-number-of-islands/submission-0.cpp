class Solution {
public:
    // i=row, j=col, a=neighbourRow, b=neighbourCol;
    void dfs(vector<vector<char>>& grid, vector<vector<bool>>&visited,int i,int j, const int &n, const int &m){
        if(i>=0 and i<n and j>=0 and j<m){
            if(!visited[i][j] and grid[i][j]=='1'){
                visited[i][j]=true;
                dfs(grid, visited, i, j-1, n, m);
                dfs(grid, visited, i-1, j, n, m);
                dfs(grid, visited, i, j+1, n, m);
                dfs(grid, visited, i+1, j, n, m);
            }    
        }  
    }

    int numIslands(vector<vector<char>>& grid) {
        int ans=0;
        int n=grid.size();
        int m=grid[0].size();
        vector<vector<bool>> visited(n, vector<bool> (m, false));
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                if(!visited[i][j] and grid[i][j]=='1'){
                    ans++;
                    dfs(grid, visited, i, j, n, m);
                }
            }
        }
        return ans;
    }
};