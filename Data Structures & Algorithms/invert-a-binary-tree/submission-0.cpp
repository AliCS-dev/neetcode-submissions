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
        if(!root) return nullptr;
        std::queue<TreeNode*> newq;
        newq.push(root);
        while(!newq.empty()){
            TreeNode* node = newq.front();
            newq.pop();
            swap(node->left,node->right);
            if(node->left) newq.push(node->left);
            if(node->right) newq.push(node->right);

        }
        return root;
    }
};
