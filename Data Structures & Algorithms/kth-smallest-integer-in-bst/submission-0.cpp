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
    int kthSmallest(TreeNode* root, int k) {
    vector<int> a;
    dfs(root, a);
    return a[k-1];
        
    }

private:
    void dfs(TreeNode* root, vector<int>& a){
        if(!root) return;
        dfs(root->left, a);
        a.push_back(root->val);
        dfs(root->right, a);
    }
};
