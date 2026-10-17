class Solution {
    bool helper(string s, int i, int j){
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;j--;
        }
        return true;
    }
public:
    bool validPalindrome(string s) {
        bool check = false;
        int i = 0, j = s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                return helper(s, i+1, j) or helper(s, i, j-1);
            }else{
                i++;
                j--;
            }
        }
        return true;
    }
};