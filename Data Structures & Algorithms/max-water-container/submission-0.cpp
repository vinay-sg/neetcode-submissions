class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size(), maxi = 0;
        for(int i = 0; i<n; i++){
            for(int j = i+1; j<n; j++){
                maxi = max(maxi, (j-i)*min(heights[i], heights[j]));
            }
        }
        return maxi;
    }
};
