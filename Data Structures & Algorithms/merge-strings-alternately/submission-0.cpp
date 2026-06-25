class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans;

        int l1 = 0;
        int l2 = 0;
        int n = word1.length();
        int m = word2.length();

        while(l1 < word1.length() && l2 < word2.length()){
            ans += word1[l1++];
            ans += word2[l2++];
        }

        if(l1 < n){
            ans += word1.substr(l1 , n);
        }

         if(l2 < m){
            ans += word2.substr(l2 , m);
        }

        return ans;
    }
};