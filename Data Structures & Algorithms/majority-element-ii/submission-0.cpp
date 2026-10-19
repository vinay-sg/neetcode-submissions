class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int, int> freq;
        for(auto &i: nums){
            freq[i]++;
        }
        for(auto &[k, v]: freq){
            if(v>n/3)ans.push_back(k);
        }
        return ans;
    }
};