class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> cnt(3, 0);
        for(auto &i: nums)cnt[i]++;
        int ptr = 0;
        for(int i = 0; i<3; i++){
            while(cnt[i]--){
                nums[ptr++] = i;
            }
        }
    }
};