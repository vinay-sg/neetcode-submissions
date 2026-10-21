class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        mp = defaultdict(int)
        n = len(nums)
        for i in range(n):
            if mp[target-nums[i]]:
                return [mp[target-nums[i]], i+1]
            mp[nums[i]]=i+1

        return [-1, -1]