class Solution {
    private:
    void bfs(int x,int y,vector<vector<char>>& grid,vector<vector<char>>&vis){
        int n=grid.size();
        int m=grid[0].size();
        
        queue<pair<int,int>>q;
        q.push({x,y});
        
        vis[x][y]='1';
        
        vector<int>dx={1,-1,0,0};
        vector<int>dy={0,0,1,-1};
        while(!q.empty()){
            x=q.front().first;
            y=q.front().second;
            for(int i=0;i<4;i++){
                
                int newx=x+dx[i];
                int newy=y+dy[i];
                
                if((newx<n && newy<m && newx>-1 && newy>-1) && (grid[newx][newy] == '1' && vis[newx][newy] == '0'))
                    {
                    q.push({newx,newy});
                    vis[newx][newy]='1';
                }
            }
            q.pop();
        }
    }
public:
    int numIslands(vector<vector<char>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        vector<vector<char>>vis(row,vector<char>(col,'0'));
        
        int cnt=0;
        
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(grid[i][j]=='1' && vis[i][j]== '0'){
                    bfs(i,j,grid,vis);
                    cnt++;
                }
                }
            }
    return cnt;}
};