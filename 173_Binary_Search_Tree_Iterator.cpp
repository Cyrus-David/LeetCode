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
class BSTIterator {
	private:
	    stack<TreeNode*> holder;
	public:
	    void addLeft(TreeNode* root) {
		while (root) {
		    holder.push(root);
		    root = root->left;
		}    
	    }
	    
	    BSTIterator(TreeNode* root) {
		addLeft(root);
	    }
	    
	    int next() {
		TreeNode* top = holder.top();
		holder.pop();
		addLeft(top->right);
		return top->val;
	    }
	    
	    bool hasNext() {
		return !holder.empty();
	    }
};

/**
 * Your BSTIterator object will be instantiated and called as such:
 * BSTIterator* obj = new BSTIterator(root);
 * int param_1 = obj->next();
 * bool param_2 = obj->hasNext();
 */
