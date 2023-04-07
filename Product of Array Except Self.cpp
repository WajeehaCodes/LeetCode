vector<int> productExceptSelf(vector<int>& nums) {
    int prefix = 1;
    vector<int> res;
    for(auto num: nums) {
        res.push_back(prefix);
        prefix *= num;
    }
    int postfix = 1;
    for(int i=nums.size()-1; i>=0; i--) {
        res[i] *= postfix;
        postfix *= nums[i];
    }
    return res;
}
