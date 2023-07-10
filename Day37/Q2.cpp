// https://leetcode.com/problems/minimum-depth-of-binary-tree/description/

class Solution {
public:
    int minDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int l = minDepth(root->left);
        int r = minDepth(root->right);
        if(l == 0) return 1+r;
        if(r==0) return 1+l; 
        return 1+min(l,r);
    }
};