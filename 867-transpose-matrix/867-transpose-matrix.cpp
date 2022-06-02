class Solution {
public:
    vector<vector<int>> transpose(vector<vector<int>>& matrix) {
        
        int n=matrix.size();
        int m=matrix[0].size();
        vector<vector<int>>v(m,vector(n,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                v[j][i]=matrix[i][j];
            }
        }
        return v;
    }
};