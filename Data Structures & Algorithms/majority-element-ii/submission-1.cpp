class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int, int> count;

        for (int num : nums) {
            count[num]++;

            if (count.size() > 2) {
                unordered_map<int, int> newCount;
                for (auto& entry : count) {
                    if (entry.second > 1) {
                        newCount[entry.first] = entry.second - 1;
                    }
                }
                count = newCount;
            }
        }

        vector<int> res;
        for (auto& [k, v] : count) {
            int frequency = 0;
            for (int num : nums) {
                if (num == k) frequency++;
            }
            if (frequency > nums.size() / 3) {
                res.push_back(k);
            }
        }

        return res;
    }
};