class Solution {
public:
    string addBinary(string a, string b) {
        string ans = "";
        int carry = 0;
        reverse(a.begin(), a.end());
        reverse(b.begin(), b.end());

        for(int i = 0; i<max(a.size(), b.size()); i++){
            int digA = i<a.size() ? a[i]-'0': 0;
            int digB = i<b.size() ? b[i]-'0': 0;

            int total = digA+digB+carry;
            char c = (total%2)+'0';
            ans+=c;
            carry = total/2;
        }

        if(carry){
            ans+='1';
        }
        reverse(ans.begin(), ans.end());
        return ans;

    }
};