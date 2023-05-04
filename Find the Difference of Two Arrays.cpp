vector<int> num1, num2;
    unordered_map<int, int> mp, mp1;
    for(int i=0; i<nums2.size(); i++) {
        mp[nums2[i]]++;
    }
    for(int i=0; i<nums1.size(); i++) {
        mp1[nums1[i]]++;
    }
    for(int i=0; i<nums1.size(); i++) {
        if(mp.find(nums1[i]) == mp.end()) {
            num1.push_back(nums1[i]);
            if(mp[nums1[i]]>1) {
                mp.erase(nums1[i]);
            }
        }
    }
    for(int i=0; i<nums2.size(); i++) {
        if(mp1.find(nums2[i]) == mp1.end()) {
            num2.push_back(nums2[i]);
            if(mp1[nums2[i]]>1) {
                mp1.erase(nums2[i]);
            }
        }
    }
  return {num1, num2};
}
