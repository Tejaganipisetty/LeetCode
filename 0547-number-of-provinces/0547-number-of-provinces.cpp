class Solution {
public:
    void dfs(map<int,vector<int>> &mv,int st,vector<int> &vis)
    {
        stack<int> stk;
        stk.push(st);
        while(stk.size()!=0)
        {
            int val=stk.top();
            stk.pop();
            if(vis[val]) continue;
            vis[val]=1;
            for(int i=mv[val].size()-1;i>=0;i--)
            {
                int val1=mv[val][i];
                if(!vis[val1]) stk.push(val1);
            }
        }
    }
    int findCircleNum(vector<vector<int>>& isConnected) {
        map<int,vector<int>> mv;
        vector<int> vis(isConnected.size());
        for(int i=0;i<isConnected.size();i++)
        {
            for(int j=0;j<isConnected[0].size();j++)
            {
                if(isConnected[i][j]==1 && i!=j) mv[i].push_back(j);
            }
        }
        int ans=0;
        for(int i=0;i<isConnected.size();i++)
        {
            if(!vis[i]) ans++;
            dfs(mv,i,vis);
        }
        return ans;

    }
};