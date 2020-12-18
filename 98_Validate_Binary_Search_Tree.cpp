class Solution {
private:
    TreeNode* prev=NULL;
public:
    bool isValidBST(TreeNode* root) {
        if  (!root)   
            return true;
        return isValidBST(root->left) && helper(root) && isValidBST(root->right);
    }
    
    bool helper(TreeNode* root){
        if (!prev) {
            prev = root;
            return true;
        }
        if (prev->val >= root->val)
            return false;
        prev = root;
        return true;
    }
};
