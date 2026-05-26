class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin() , nums.end());

        int ans = 0;
        int length = 0;
        for(auto n : nums){
            if(st.find(n-1) == st.end()){
                length = 0;
                while(st.find(n + length) != st.end()){
                    length++;
                }
            }
            ans = max(ans , length);
        }
        return ans;
    }
};
