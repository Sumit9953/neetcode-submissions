class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int temp = -1;
        int n = arr.size() - 1;
        vector<int> ans(n+1);
        int j = 0;

        for(int i = n;i >= 0;i--){
            ans[i] = temp;
            // j++;
            // cout<<temp<<" ";
            if(arr[i] > temp){
                temp = arr[i];
            }
            cout<<i<<" ";
        }

        return ans;
    }
};