class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> ans;
        vector<string> temp = strs;
        unordered_map<string, vector<int>> mp;
        for(auto &s: temp)sort(s.begin(), s.end());
        for(int i = 0; i<temp.size(); i++){
            mp[temp[i]].push_back(i);
        }

        for(auto &[k, v]: mp){
            vector<string> subset;
            for(auto &i: v){
                subset.push_back(strs[i]);
            }
            ans.push_back(subset);
        }
        return ans;
    }
};
