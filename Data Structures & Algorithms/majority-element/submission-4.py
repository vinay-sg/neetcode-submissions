class Solution:
    def majorityElement(self, nums: List[int]) -> int:
        ans, cnt = 0, 0
        for n in nums:
            if not cnt:
                ans = n
            cnt+= 1 if n==ans else -1
        return ans
        