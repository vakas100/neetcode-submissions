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
    vector<int> rightSideView(TreeNode* root) {
        vector<int> rightNode;

        if(!root) return rightNode;

        rightNode.push_back(root->val);
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int size = q.size();
            TreeNode* last = nullptr;
            while(size--) {
                TreeNode* current = q.front();
                q.pop();

                if(current->left) {
                    q.push(current->left);
                    last = current->left;
                }
                if(current->right) {
                    q.push(current->right);
                    last = current->right;
                }
            }
            if(last) rightNode.push_back(last->val);
        }
        return rightNode;
    }
};
