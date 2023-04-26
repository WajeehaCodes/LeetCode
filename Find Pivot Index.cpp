int pivotIndex(vector<int>& nums) {
    int prefix = 0;
    vector<int> res, res1;
    for(auto num: nums) {
        res.push_back(prefix);
        prefix += num;
    }
    prefix = 0;
    for(int i=nums.size()-1; i>=0; i--) {
        res1.push_back(prefix);
        prefix += nums[i];
    }
    reverse(res1.begin(), res1.end());
    for(int i=0; i<nums.size(); i++) {
      if(res[i] == res1[i])
        return i;
    }
    return -1;
}
