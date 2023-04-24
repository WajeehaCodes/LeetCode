TreeNode* sortedArray(vector<int> nums, int st, int end) {
    if(end<=st) return nullptr;
    int mid = (end + st) / 2;
    TreeNode* root = new TreeNode(nums[mid]);
    root->left=sortedArray(nums, st, mid);
    root->right=sortedArray(nums, mid+1, end);
    return root;
}
TreeNode* sortedArrayToBST(vector<int>& nums) {
    return sortedArray(nums, 0, nums.size());
}
