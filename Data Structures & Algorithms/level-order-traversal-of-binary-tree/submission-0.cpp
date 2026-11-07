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
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> levelnodes;
        if(root == nullptr) {
            return levelnodes;
        }
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            vector<int> currentLevelNodes;

            int size = q.size();

            while(size--){
                TreeNode* current = q.front();
                q.pop();
                currentLevelNodes.push_back(current->val);

                if(current->left != nullptr) {
                    q.push(current->left);
                }
                if(current->right != nullptr) {
                    q.push(current->right);
                }
            }
            levelnodes.push_back(currentLevelNodes);
        }
        return levelnodes;
    }
};
