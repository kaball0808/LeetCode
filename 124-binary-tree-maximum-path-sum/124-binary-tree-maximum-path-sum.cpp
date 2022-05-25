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
    int ans = INT_MIN;
    
    int maxPathSum(TreeNode* root) {
        AddPathSum(root);
        return ans;
    }
    int AddPathSum (TreeNode* root){
        if(!root) return 0;

        int leftMax = max(0, AddPathSum(root->left));
        int rightMax = max(0, AddPathSum(root->right));
            
        ans = max(ans, root->val + leftMax + rightMax);
            
        return root->val + max(leftMax, rightMax);
    }
};