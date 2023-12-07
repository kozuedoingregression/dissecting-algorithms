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
    vector<int> ans;
    void solve(TreeNode* root)
    {
        if(root == NULL) return;
        solve(root->left);
        ans.push_back(root->val);
        solve(root->right);
    }

    vector<int> inorderTraversal(TreeNode* root) {
        ios_base::sync_with_stdio(0);
cin.tie(0);
cout.tie(0);
        solve(root);
        return ans;
    }
};