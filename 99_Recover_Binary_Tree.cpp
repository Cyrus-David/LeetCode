void traverse(TreeNode* root, TreeNode*& pre, TreeNode*& first, TreeNode*& second) {
    if (!root) return;

    traverse(root->left, pre, first, second);

    if (pre && pre->val>root->val) 
    {
        if (!first) 
            first = pre;
        second = root;
    }

    pre = root;
    traverse (root->right, pre, first, second);
}

void recoverTree(TreeNode* root) {
    TreeNode *first = NULL, *second = NULL, *pre = NULL;
    traverse(root, pre, first, second);

    if (first) {
        swap(first->val, second->val);
    }
}

//////////////////////////////////////////////////////////////////////////////////////////////////

void dfs(TreeNode* root, TreeNode* left, TreeNode* right, bool& swapped) {
    if (root == NULL)
        return;

    if (left != NULL &&  (left->val > root->val)) {
        swap(root->val, left->val);
        swapped = true;
    } else if (right != NULL &&  (right->val < root->val)) {
        swap(root->val, right->val);
        swapped = true;
    }

    dfs(root->left, left, root, swapped);
    dfs(root->right, root, right, swapped);
}

void recoverTree(TreeNode* root) {
    bool swapped = true;
    while (swapped) {
        swapped = false;
        dfs(root, NULL, NULL, swapped);
    }
}
