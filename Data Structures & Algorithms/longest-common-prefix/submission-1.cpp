class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        int n = strs.size();
        if(n==1)return strs[0];
        string prefix = strs[0];
        for(int i = 1; i<n; i++){
            if(prefix=="" or strs[i]=="")return "";
            string temp = "";
            int m = 0, n = 0;
            while(m<prefix.size() and n<strs[i].size()){
                if(prefix[m]==strs[i][n]){
                    temp+=prefix[m];
                }else{
                    prefix = temp;
                }
                m++;n++;
            }
            prefix = temp;
        }
        return prefix;
    }
};