class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }

        return mp.size() == nums.size() ? false : true;
    }
};