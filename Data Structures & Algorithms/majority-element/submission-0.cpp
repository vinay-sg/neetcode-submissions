class Solution {
public:
    int majorityElement(vector<int>& nums) {
        if(nums.size()==1)return nums[0];
        sort(nums.begin(), nums.end());
        int max_occurance = 0, occurance = 1, major = nums[0];
        for(int i = 1; i<nums.size(); i++){
            if(nums[i]==nums[i-1]){
                occurance++;
                if(max_occurance<occurance){
                    max_occurance = occurance;
                    major = nums[i];
                }
            }else{
                occurance = 1;
            }
        }
        return major;
    }
};