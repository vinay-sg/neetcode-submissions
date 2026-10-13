class Solution:
    def maxArea(self, heights: List[int]) -> int:
        n = len(heights)
        i, j, maxi = 0, n-1, 0
        while i<j:
            area = (j-i)*min(heights[i], heights[j])
            maxi = max(area, maxi)
            if heights[j]>heights[i]:
                i+=1
            else:
                j-=1
        return maxi