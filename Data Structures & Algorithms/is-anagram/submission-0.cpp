class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char, int> m1, m2;
        if(s.size()!=t.size())return false;
        for(auto &c: s)m1[c]++;
        for(auto &c: t)m2[c]++;
        for(auto &[k, v]: m1){
            if(m2[k]!=v)return false;
        }
        return true;
    }
};
