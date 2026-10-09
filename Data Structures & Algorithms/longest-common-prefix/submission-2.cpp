class Solution {
    string compare_strs(string a, string prefix){
        int i=0, j=0, matched=0;
        while(i<a.size() and j<prefix.size()){
            if(a[i]!=prefix[i])break;
            else{
                matched++;
                j++;
                i++;
            }
        }
        return a.substr(0, matched);
    }
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1)return strs[0];
        string prefix = strs[0];
        for(int i=0; i<n; i++){
          prefix =  compare_strs(strs[i], prefix);
        }
        return prefix;
    }
};