
class Solution {
private:
    pair<int, TreeNode*> helper(TreeNode* root) {
        if (!root) return {0, root};
        pair<int, TreeNode*> l = helper(root->left), 
        		      r = helper(root->right);
        		      
        int d1 = l.first, d2 = r.first;
        return {max(d1, d2) + 1, (d1 == d2) ? root : (d1 > d2) ? l.second : r.second};
    }
    
public:

    TreeNode* subtreeWithAllDeepest(TreeNode* root) {
        return helper(root).second;
    }
};
