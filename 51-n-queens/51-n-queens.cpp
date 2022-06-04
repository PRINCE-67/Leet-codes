class Solution {
    private:
    bool issafe(int i,int j,vector<string>a,int n)
    {
        int row=i;
        int col=j;
        while(i>=0 && j>=0)
        {
            if(a[i][j]=='Q') return false;
            i--;
            j--;
        }
        i=row;
        j=col;
        
        while(i<n && j>=0)
        {
            if(a[i][j]=='Q') return false;
            i++;
            j--;
        }
         i=row;
        j=col;
        
        while(j>=0)
        {
            if(a[i][j]=='Q') return false;
            j--;
        }
        return true;
    }
    void solve(int j,vector<string> &a,vector<vector<string>> &ans,int n)
    {
        if(j==n)
        {
            ans.push_back(a);
            return;
        }
        for(int i=0;i<n;i++)
        {
            if(issafe(i,j,a,n))
            {
                a[i][j]='Q';
                solve(j+1,a,ans,n);
                a[i][j]='.';
            }
        }
    }
    
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n);
        vector<vector<string>>ans;
        string s(n,'.');
        for(int i=0;i<n;i++)
        {
            board[i]=s;
        }
        solve(0,board,ans,n);
        return ans;
    }
};