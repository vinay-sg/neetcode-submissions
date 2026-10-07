#include <cctype>
#include <algorithm>

class Solution {
    bool isAlphaNumeric(char c){
        if((c>='A' and c<='Z') or (c>='a' and c<='z') or (c>='0' and c<='9'))return true;
        return false;
    }
public:
    bool isPalindrome(string s) {
        std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c) {
            return std::tolower(c);
        });
        int n = s.size();
        int l = 0, r = n-1;
        while(l<=r){
            while(l<r and !isAlphaNumeric(s[l]))l++;
            while(l<r and !isAlphaNumeric(s[r]))r--;
            if(s[l++]!=s[r--])return false;
        }
        return true;
    }
};
