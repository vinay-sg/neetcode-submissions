class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        ranges::sort(nums);
        return nums[nums.size()-k];
    }
};
