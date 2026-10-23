class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        int mask = INT_MAX;
        for(int i = left; i<=right; i++){
            mask&=i;
        }
        return mask;
    }
};