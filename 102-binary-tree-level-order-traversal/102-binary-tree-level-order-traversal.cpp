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
        if(root == NULL) return {};
        
        vector<vector<int>> res;
        queue<TreeNode*> mq;
        
        mq.push(root);
        while(!mq.empty()){
            int n = mq.size();
            vector<int> level;
            TreeNode* temp;
            
            for(int i =0;i<n;i++){
                temp = mq.front();
                mq.pop();
                level.push_back(temp->val);
                
                if(temp->left) mq.push(temp->left);
                if(temp->right) mq.push(temp->right);
            }
            res.push_back(level);
        }
        return res;
    }
};