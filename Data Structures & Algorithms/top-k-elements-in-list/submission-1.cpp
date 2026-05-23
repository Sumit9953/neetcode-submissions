class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int,int> mp;
        for(auto x : nums){
            mp[x]++;
        }

        // vector<pair<int,int>> newArr(mp.begin() , mp.end());

        // sort(newArr.begin() , newArr.end() , [](const auto&a , const auto&b){
        //     return b.second < a.second;
        // });

        vector<pair<int, int>> arr;
        for (const auto& p : mp) {
            arr.push_back({p.second, p.first});
        }
        sort(arr.rbegin(), arr.rend());

        vector<int> res;
        for (int i = 0; i < k; ++i) {
            res.push_back(arr[i].second);
        }
        return res;
    }
};
