class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> us(nums.begin(), nums.end());
        int i = 0;
        for(auto &e: us){
            nums[i++] = e;
        }
        return us.size();
    }
};