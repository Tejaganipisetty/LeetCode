/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    void zlO(TreeNode* root,int lev,map<int,vector<int>>&mp)
    {
        if(root==NULL) return;
        mp[lev].push_back(root->val);
        zlO(root->left,lev+1,mp);
        zlO(root->right,lev+1,mp);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,vector<int>> mp;
        zlO(root,0,mp);
        int i=0;
        for(auto it:mp)
        {
            if(i & 1){
                reverse(it.second.begin(),it.second.end());
                ans.push_back(it.second);
            }
            else{ans.push_back(it.second);
             
        }
            i++;
        }
        return ans;
    }
};