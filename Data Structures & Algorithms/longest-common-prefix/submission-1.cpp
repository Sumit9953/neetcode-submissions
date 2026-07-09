class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s1 = strs[0];
        int m = s1.length();
        string ans = "";

        for(int i = 0;i<m;i++){
            char ch = s1[i];
            for(int j = 1;j<strs.size();j++){
                string s2 = strs[j];
                if(s2[i] != ch){
                    return ans;
                }
            }
            ans += ch;
        }
        return ans;
    }
};