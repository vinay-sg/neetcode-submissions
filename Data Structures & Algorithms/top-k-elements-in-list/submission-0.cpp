class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        map<int, vector<int>, greater<int>> mp;

        sort(nums.begin(), nums.end());

        int cnt = 1, n = nums.size();

        for(int i = 1; i < n; i++) {
            if(nums[i] == nums[i-1]) {
                cnt++;
            } else {
                mp[cnt].push_back(nums[i-1]);
                cnt = 1;
            }
        }

        // Last element
        mp[cnt].push_back(nums[n-1]);

        vector<int> ans;

        for(auto &[freq, values] : mp) {
            for(auto val : values) {
                if(k-- == 0)
                    return ans;

                ans.push_back(val);
            }
        }

        return ans;
    }
};