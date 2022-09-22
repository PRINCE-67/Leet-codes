class Solution {
    private:
    void dfs(int node,vector<int>adjj[],vector<int>&vis){
        vis[node]=1;
        
        for(auto it: adjj[node]){
            if(!vis[it]){
                dfs(it,adjj,vis);
            }
        }
    }
  public:
    int findCircleNum(vector<vector<int>>&adj) {
        // code here
        int cnt=0;
        int V= adj.size();
        vector<int>vis(V+1,0);
        
        vector<int>adjj[V];
        
        for(int i=0;i<V;i++){
            for(int j=0;j<V;j++){
                if(adj[i][j] == 1 && i!=j){
                    
                    adjj[i].push_back(j);
                    adjj[j].push_back(i);
                }
            }
        }
        for(int i=0;i<V;i++){
            if(vis[i]==0){
                cnt++;
                dfs(i,adjj,vis);
            }
        }
        return cnt;
    }
};