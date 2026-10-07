class Solution {
    map<char, int> mp = {
        {'(', 1}, {'{', 2}, {'[', 3}, {')', -1}, {'}', -2}, {']', -3}
    };
public:
    bool isValid(string s) {
        stack<int> st;
        for(auto &c: s){
            if(c=='}' or c==']' or c==')'){
                if(st.empty() or (st.top()+mp[c])!=0)return false;
                st.pop();
            }else{
                st.push(mp[c]);
            }
        }
        return st.empty();
    }
};
