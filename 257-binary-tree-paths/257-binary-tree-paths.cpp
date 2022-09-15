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
    
    vector<string> ans;
    void helper(TreeNode* node,string s){
        if(node==NULL)
        { 
            return;
          }
        else {
            s=s+to_string(node->val);
            if(node->left==NULL and node->right==NULL)
            {
                ans.push_back(s);
                return;
            }
            if(node->left!=NULL)
            helper(node->left,s+"->");
            if(node->right!=NULL)
            helper(node->right,s+"->");
        }
            
        
    }
    
    vector<string> binaryTreePaths(TreeNode* root) {
        helper(root,"");
        return ans;
    }
};