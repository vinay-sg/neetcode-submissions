class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        ranges::sort(nums);
        int n = nums.size(), ans = 1, cnt = 1;
        if(n==0)return 0;
        for(int i =1; i<n; i++){
            if(nums[i]!=nums[i-1]){
            if(nums[i]==nums[i-1]+1){
                cnt++;
            }else{
                ans = max(ans, cnt);
                cnt = 1;
            }
            }
        }
        return max(ans, cnt);
    }
};
