class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0)return 0;
        unordered_set<int> st(nums.begin(), nums.end());
        int ans = 1;
        for(auto &i: nums){
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
