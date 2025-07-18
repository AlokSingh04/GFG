// User function Template for C++
class Solution {
  public:
    void DFS(vector<vector<int>>& grid, int i, int j, int r, int c){
        if(i==r || j==c || i<0 || j<0 || grid[i][j]==0){
            return;
        }
        
        grid[i][j] = 0;
        
        DFS(grid,i,j+1,r,c);
        DFS(grid,i-1,j,r,c);
        DFS(grid,i,j-1,r,c);
        DFS(grid,i+1,j,r,c);
    }
  
    vector<int> numOfIslands(int n, int m, vector<vector<int>> &operators) {
        vector<vector<int>> grid(n,vector<int>(m,0));
        vector<int> res;
        
        for(int x=0;x<operators.size();x++){
            for(int y=0;y<=x;y++){
                grid[operators[y][0]][operators[y][1]] = 1;
            }
            int temp = 0;
            for(int i=0;i<n;i++){
                for(int j=0;j<m;j++){
                    if(grid[i][j] == 1){
                        DFS(grid,i,j,n,m);
                        temp++;
                    }
                }
            }
            res.push_back(temp);
        }
        
        return res;
    }
};
