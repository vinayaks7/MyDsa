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
    void fUtils(TreeNode* root, unordered_map<int, int> &umap, int &max_freq)
    {
        if(root == NULL)
        {
            return;
        }
        umap[root->val]++;
        max_freq = max(max_freq, umap[root->val]);//maintain the max. frequency out of all

        fUtils(root->left, umap, max_freq);
        
         fUtils(root->right, umap, max_freq);
    }
    
    vector<int> findMode(TreeNode* root) {
        
        vector<int> res;
        int max_freq = 0;
        
        unordered_map<int, int> umap;//key is node value, freq of it
        
        fUtils(root, umap, max_freq);
        
        for(auto itr=umap.begin();itr!=umap.end();itr++)
        {
            if(itr->second == max_freq)
            {
                res.push_back(itr->first);
            }
        }
        
        return res;
    }
};