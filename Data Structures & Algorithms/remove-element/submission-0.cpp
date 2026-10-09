class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int n = nums.size();
        if(n == 0) return 0;

        int i = 0, j = n - 1;

        while(i <= j) {
            if(nums[i] != val) {
                i++;
            } else {
                while(j >= i && nums[j] == val)
                    j--;

                if(j < i) break;

                swap(nums[i], nums[j]);
                j--;
                i++;
            }
        }

        return i;
    }
};