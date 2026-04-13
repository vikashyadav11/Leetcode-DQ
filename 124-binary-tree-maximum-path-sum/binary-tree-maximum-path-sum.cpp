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
    int maxSum=INT_MIN;
    int solve(TreeNode* root){
        if(root==NULL)  return 0;

        int l=solve(root->left);
        int r=solve(root->right);

        int neeche_hi_milgaya_ans=root->val+l+r;
        int only_ek_side_achha=root->val+max(l,r);
        int only_root_achha=root->val;

        maxSum=max({maxSum,neeche_hi_milgaya_ans,only_ek_side_achha,only_root_achha}); 

        return max(only_ek_side_achha,only_root_achha);    
    }
    int maxPathSum(TreeNode* root) {
        solve(root);
        return maxSum;
    }
};