class Solution {
public:
    int maxArea(vector<int>& heights) {
        int n = heights.size();
        int i = 0, j = n-1, maxi = 0;
        while(i<j){
            int area = (j-i)*min(heights[i], heights[j]);
            maxi = max(area, maxi);
            if(heights[j]>heights[i]){
                i++;
            }else{
                j--;
            }
        }
        return maxi;
    }
};
