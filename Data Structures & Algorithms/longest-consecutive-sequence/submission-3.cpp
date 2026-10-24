class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 0;
        for(auto &i: st){
            int len = 1;
            if(!st.count(i-1)){
                while(st.count(i+len)){
                    len++;
                }
                ans = max(ans, len);
            }
        }
        return ans;
    }
};
