int maxDepth(TreeNode* root) {
    if(!root) return 0;
    int ldepth = maxDepth(root->left) + 1;
    int rdepth = maxDepth(root->right) + 1;
    int max = 0;

    if(ldepth >= rdepth)
         max = ldepth;
    else 
        max = rdepth;

    return max;
}
