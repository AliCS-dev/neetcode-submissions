class Solution:
    def lengthOfLongestSubstring(self, s: str) -> int:
        charS = set()
        left = 0
        res = 0
        for right in range(len(s)):
            while s[right] in charS:
                charS.remove(s[left])
                left += 1
            charS.add(s[right])
            res = max(res, right - left + 1)
        return res