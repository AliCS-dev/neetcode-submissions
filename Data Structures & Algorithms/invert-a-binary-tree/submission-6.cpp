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
    TreeNode* invertTree(TreeNode* root) {
        if(!root)return nullptr;
        std::stack<TreeNode*>stac;
        stac.push(root);
        while(!stac.empty()){
            TreeNode* node = stac.top();
            stac.pop();
            std::swap(node->left,node->right);
            if(node->left) stac.push(node->left);
            if(node->right) stac.push(node->right);
        }
        return root;
    }
};
